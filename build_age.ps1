[CmdletBinding()]
param(
    # PostgreSQL 16 root (the folder containing bin\, include\, lib\).
    # Auto-detected from pg_config on PATH, else defaults to the EDB location.
    [string]$PgRoot
)

$ErrorActionPreference = "Stop"
$src = $PSScriptRoot

function Fail($msg) { Write-Error $msg; exit 1 }

# --- locate PostgreSQL 16 (server headers + postgres.lib) ---
if (-not $PgRoot) {
    $pgConfig = Get-Command pg_config.exe -ErrorAction SilentlyContinue
    if ($pgConfig) {
        $bindir = & $pgConfig.Source --bindir 2>$null
        if ($bindir) { $PgRoot = Split-Path $bindir -Parent }
    }
}
if (-not $PgRoot) { $PgRoot = "C:\Program Files\PostgreSQL\16" }
if (-not (Test-Path (Join-Path $PgRoot "include\server\postgres.h"))) {
    Fail "PostgreSQL server headers not found under '$PgRoot\include\server'. Install PostgreSQL 16 (the EDB installer includes them) or pass -PgRoot <path>."
}
$pgLib = Join-Path $PgRoot "lib\postgres.lib"
if (-not (Test-Path $pgLib)) {
    Fail "postgres.lib not found at '$pgLib'. The EDB PostgreSQL 16 install ships it; pass -PgRoot if PostgreSQL lives elsewhere."
}
Write-Output ("PostgreSQL: {0}" -f $PgRoot)

# --- locate Visual Studio 2022 C++ (any edition) and its vcvars64.bat ---
$vcvars = $null
$vswhere = Join-Path ${env:ProgramFiles(x86)} "Microsoft Visual Studio\Installer\vswhere.exe"
if (Test-Path $vswhere) {
    $vsPath = & $vswhere -latest -products * -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath 2>$null
    if ($vsPath) {
        $candidate = Join-Path $vsPath "VC\Auxiliary\Build\vcvars64.bat"
        if (Test-Path $candidate) { $vcvars = $candidate }
    }
}
if (-not $vcvars) {
    foreach ($edition in @("Community", "Professional", "Enterprise", "BuildTools")) {
        $c = "C:\Program Files\Microsoft Visual Studio\2022\$edition\VC\Auxiliary\Build\vcvars64.bat"
        if (Test-Path $c) { $vcvars = $c; break }
    }
}
if (-not $vcvars) {
    Fail "vcvars64.bat not found. Install Visual Studio 2022 with the 'Desktop development with C++' workload."
}
Write-Output ("MSVC:       {0}" -f $vcvars)

# --- import the MSVC environment (x64) ---
foreach ($line in (cmd /c "call `"$vcvars`" && set")) {
    if ($line -match '^([^=]+)=(.*)$' -and $line -notmatch '^=') {
        Set-Item -Path ("env:" + $matches[1]) -Value $matches[2] -ErrorAction SilentlyContinue
    }
}

# --- parse the OBJS list out of the PGXS Makefile ---
$mk = Get-Content (Join-Path $src "Makefile") -Raw
$block = [regex]::Match($mk, '(?s)OBJS\s*=\s*(.*?)\r?\n\s*\r?\n').Groups[1].Value
$objs = [regex]::Matches($block, 'src/[\w/\.]+\.o') | ForEach-Object { $_.Value }
Write-Output ("OBJS entries parsed: {0}" -f $objs.Count)

$srcs = $objs | ForEach-Object { Join-Path $src (($_ -replace '\.o$', '.c') -replace '/', '\') }
$missing = $srcs | Where-Object { -not (Test-Path $_) }
if ($missing) { Write-Output "MISSING SOURCES (regenerate the parser?):"; $missing | ForEach-Object { Write-Output ("  " + $_) } }
$srcs = $srcs | Where-Object { Test-Path $_ }
Write-Output ("Compiling {0} source files" -f $srcs.Count)

$build = Join-Path $src "build"
New-Item -ItemType Directory -Force -Path $build | Out-Null

$incDirs = @("$PgRoot\include", "$PgRoot\include\server", "$PgRoot\include\server\port\win32", "$PgRoot\include\server\port\win32_msvc",
             (Join-Path $src "src\include"), (Join-Path $src "src\include\parser")) | Where-Object { Test-Path $_ }
$compat = Join-Path $src "age_win_compat.h"

# --- cl.rsp (response file keeps the command line under the Windows limit) ---
$clRsp = New-Object System.Collections.Generic.List[string]
$clRsp.Add('/c'); $clRsp.Add('/nologo'); $clRsp.Add('/O2'); $clRsp.Add('/MD')
$clRsp.Add('/DWIN32'); $clRsp.Add('/D_WINDOWS'); $clRsp.Add('/D_CRT_SECURE_NO_WARNINGS'); $clRsp.Add('/D_CRT_NONSTDC_NO_WARNINGS')
$clRsp.Add('/FI"' + $compat + '"')
foreach ($d in $incDirs) { $clRsp.Add('/I"' + $d + '"') }
foreach ($s in $srcs) { $clRsp.Add('"' + $s + '"') }
[System.IO.File]::WriteAllLines((Join-Path $build "cl.rsp"), $clRsp)

Push-Location $build
Write-Output "=== COMPILE ==="
cmd /c "cl @cl.rsp"
$clExit = $LASTEXITCODE
Write-Output ("cl exit: {0}" -f $clExit)
if ($clExit -ne 0) { Pop-Location; Fail "Compilation failed." }

# --- link.rsp ---
$objPaths = Get-ChildItem (Join-Path $build "*.obj") | ForEach-Object { $_.FullName }
if ($objPaths.Count -eq 0) { Pop-Location; Fail "No object files produced." }
$linkRsp = New-Object System.Collections.Generic.List[string]
$linkRsp.Add('/DLL'); $linkRsp.Add('/NOLOGO'); $linkRsp.Add('/OUT:age.dll')
foreach ($o in $objPaths) { $linkRsp.Add('"' + $o + '"') }
$linkRsp.Add('"' + $pgLib + '"')
[System.IO.File]::WriteAllLines((Join-Path $build "link.rsp"), $linkRsp)
Write-Output "=== LINK ==="
cmd /c "link @link.rsp"
Write-Output ("link exit: {0}" -f $LASTEXITCODE)
Get-ChildItem (Join-Path $build "age.dll") -ErrorAction SilentlyContinue | Select-Object FullName, Length
Pop-Location
