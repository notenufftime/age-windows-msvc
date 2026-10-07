# Apache AGE for Windows — PostgreSQL 16 (MSVC)

[Apache AGE](https://age.apache.org) 1.5.0 built for **PostgreSQL 16 on Windows**,
compiled with the same MSVC toolchain as the EDB distribution.

AGE has no Windows support upstream: the docs point you at WSL, and the community
PG16 binaries that once existed were deleted, leaving a single `age.dll` as the
only missing piece. This repository is that piece — a small, written-down port
that turns the stock `PG16/v1.5.0-rc0` sources into a working Windows extension
with **no WSL, no Docker, and no second PostgreSQL**.

## Why this exists

`PG16/v1.5.0-rc0` compiles on Linux unchanged. On Windows/MSVC it needs four
fixes and a generated parser:

| Upstream | Windows/MSVC problem | Fix |
|---|---|---|
| token `STRING` | collides with the `STRING` **typedef** in `winternl.h` (`#undef` cannot help) | rename to `CG_STRING` |
| tokens `DELETE` / `IN` / `OPTIONAL` | collide with Windows SDK **macros** | guarded `#undef` emitted before the token enum |
| `uint`, `__attribute__((…))`, `strcasecmp`, `strndup` | GNU/POSIX-only | `unsigned int`; forced-include shims (`age_win_compat.h`) |
| `create_vlabel` / `create_elabel` | `Datum` declaration vs `PGDLLEXPORT` definition → C2375 | mark declarations `PGDLLEXPORT` |
| `age_timestamp()` | POSIX `clock_gettime` / `struct timespec` | `GetSystemTimeAsFileTime` under `_WIN32` |

None of it is hard once written down; it had simply never been written down.
The exact diff is in [`docs/age-windows-port.patch`](docs/age-windows-port.patch)
and explained in [`docs/PORT_NOTES.md`](docs/PORT_NOTES.md).

## Build

Requirements: **Visual Studio 2022** (any edition, with the *Desktop development
with C++* workload) and **PostgreSQL 16** server headers + import library (the
EDB installer ships `include\server` and `lib\postgres.lib`). The generated
bison/flex parser files are committed, so flex/bison are **not** required.

```powershell
./build_age.ps1
```

The script **auto-detects** both: PostgreSQL via `pg_config` on `PATH` (falling
back to `C:\Program Files\PostgreSQL\16`) and Visual Studio via `vswhere` across
all editions. If PostgreSQL lives somewhere unusual, point it there:

```powershell
./build_age.ps1 -PgRoot "D:\pgsql\16"
```

Produces `build\age.dll` — x64 Release, `/MD`, linked against `postgres.lib`
(53 translation units, ~456 KB, 413 exports). It fails with a clear message if
the server headers, `postgres.lib`, or `vcvars64.bat` can't be found.

## Install

```powershell
$PG = "C:\Program Files\PostgreSQL\16"
Copy-Item .\build\age.dll  "$PG\lib\age.dll"
Copy-Item .\age.control    "$PG\share\extension\age.control"
Copy-Item .\age--1.5.0.sql "$PG\share\extension\age--1.5.0.sql"
```

## Verify

```sql
LOAD 'age';
SET search_path = ag_catalog, "$user", public;
SELECT * FROM cypher('my_graph', $$ MATCH (n) RETURN count(n) $$) AS (c agtype);
```

Confirmed on PostgreSQL **16.14** with AGE **1.5.0**: `LOAD 'age'` succeeds and
openCypher runs end-to-end against a live graph (38 nodes / 3 edges).

## Notes

- Version-locked to PostgreSQL 16 (MSVC 19.44, matching the EDB build). A major
  upgrade needs a rebuild — still one command.
- `age.dll` is intentionally **not** committed; build it. Binaries belong in
  releases, not the tree.
- If you regenerate the parser, use winflexbison (`win_bison` 3.8.x) and
  `perl tools/gen_keywordlist.pl`, then commit the four generated files.

## Credits

Port developed by **Spark**, an AI collaborator, for [notenufftime](https://github.com/notenufftime).

Apache AGE is © The Apache Software Foundation, licensed under Apache-2.0.
