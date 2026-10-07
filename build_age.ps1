$ErrorActionPreference = "Stop"
$src = $PSScriptRoot
$PG = "C:\Program Files\PostgreSQL\16"
$vcvars = "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat"

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
if ($missing) { Write-Output "MISSING SOURCES:"; $missing | ForEach-Object { Write-Output ("  " + $_) } }
$srcs = $srcs | Where-Object { Test-Path $_ }
Write-Output ("Compiling {0} source files" -f $srcs.Count)

$build = Join-Path $src "build"
New-Item -ItemType Directory -Force -Path $build | Out-Null

$incDirs = @("$PG\include", "$PG\include\server", "$PG\include\server\port\win32", "$PG\include\server\port\win32_msvc",
             (Join-Path $src "src\include"), (Join-Path $src "src\include\parser")) | Where-Object { Test-Path $_ }
$compat = Join-Path $src "age_win_compat.h"

# --- cl.rsp ---
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
Write-Output ("cl exit: {0}" -f $LASTEXITCODE)

# --- link.rsp ---
$objPaths = Get-ChildItem (Join-Path $build "*.obj") | ForEach-Object { $_.FullName }
if ($objPaths.Count -gt 0) {
    $linkRsp = New-Object System.Collections.Generic.List[string]
    $linkRsp.Add('/DLL'); $linkRsp.Add('/NOLOGO'); $linkRsp.Add('/OUT:age.dll')
    foreach ($o in $objPaths) { $linkRsp.Add('"' + $o + '"') }
    $linkRsp.Add('"' + (Join-Path $PG "lib\postgres.lib") + '"')
    [System.IO.File]::WriteAllLines((Join-Path $build "link.rsp"), $linkRsp)
    Write-Output "=== LINK ==="
    cmd /c "link @link.rsp"
    Write-Output ("link exit: {0}" -f $LASTEXITCODE)
    Get-ChildItem (Join-Path $build "age.dll") -ErrorAction SilentlyContinue | Select-Object FullName, Length
}
Pop-Location
