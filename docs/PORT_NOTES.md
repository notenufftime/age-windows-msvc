# Port notes — Apache AGE 1.5.0 on Windows / MSVC (PostgreSQL 16)

Source: upstream `apache/age` tag **`PG16/v1.5.0-rc0`**.
Target: PostgreSQL **16.14** (EDB/MSVC), Visual Studio 2022 Community
(toolset 14.44), x64 Release, dynamic CRT (`/MD`).

## Source changes (see `age-windows-port.patch`)

1. **`src/backend/parser/cypher_gram.y`**
   - Token `STRING` → `CG_STRING`. The name collides with the `STRING`
     **typedef** declared in `winternl.h`, which a `#undef` cannot remove.
   - Added a `%code requires { … }` block that `#undef`s `DELETE`, `IN`,
     `OPTIONAL`, `STRING` so the generated token enum survives the Windows SDK
     macros. Bison emits this at the top of the generated header, after
     `<windows.h>` has already been pulled in via `postgres.h`.
   - `uint nlen` → `unsigned int nlen` (MSVC has no `uint`).
2. **`src/backend/parser/cypher_parser.c`** — scanner token map uses `CG_STRING`.
3. **`src/include/commands/label_commands.h`** — `create_vlabel` /
   `create_elabel` declarations marked `PGDLLEXPORT` to match the
   `PG_FUNCTION_INFO_V1` definition (otherwise C2375: different linkage).
4. **`src/backend/utils/adt/agtype.c`** — `age_timestamp()` uses
   `GetSystemTimeAsFileTime` under `_WIN32` instead of POSIX
   `clock_gettime(CLOCK_REALTIME, …)`.
5. **`age_win_compat.h`** (forced include via `/FI`) — shims for
   `__attribute__(x)`, `strcasecmp`/`strncasecmp` → `_stricmp`/`_strnicmp`,
   and a `strndup` implementation.

The compat header is forced into every translation unit by `build_age.ps1`
(`/FI"…\age_win_compat.h"`).

## Generated files (committed)

- `src/backend/parser/cypher_gram.c`
- `src/include/parser/cypher_gram_def.h`
- `src/backend/parser/ag_scanner.c`
- `src/include/parser/cypher_kwlist_d.h`

Regenerate with:
```
win_bison -d --defines=src/include/parser/cypher_gram_def.h \
          -o src/backend/parser/cypher_gram.c src/backend/parser/cypher_gram.y
win_flex  -o src/backend/parser/ag_scanner.c src/backend/parser/ag_scanner.l
perl -I ./tools/ ./tools/gen_keywordlist.pl --extern \
     --varname CypherKeyword --output src/include/parser src/include/parser/cypher_kwlist.h
```

## Build

```
./build_age.ps1
```
Parses the `OBJS` list from the (PGXS) `Makefile`, compiles all 53 translation
units against `PostgreSQL\16\include{,\server,\server\port\win32}` plus AGE's
`src\include`, and links `age.dll` against `postgres.lib`. Uses response files
(`cl.rsp` / `link.rsp`) to stay under the Windows command-line length limit.

## Install

`age.dll` → `lib\`; `age.control` and `age--1.5.0.sql` → `share\extension\`.
`age--1.5.0.sql` is the concatenation of `sql/*.sql` in `sql/sql_files` order.

## Verification

Confirmed on PostgreSQL 16.14 with AGE registered as `1.5.0` (version parity
with the Linux side of the shared cluster):

```sql
LOAD 'age';                                   -- ok
SELECT * FROM cypher('…', $$ MATCH (n) RETURN count(n) $$) AS (c agtype);
```

## Caveats

- The DLL must match the AGE version already registered in the target catalog;
  `sql/sql_files` and the `OBJS` list are identical between the 1.5.0 tag and the
  master snapshot, so the function set is stable.
- PostgreSQL does not support sharing one data directory between Windows and
  Linux. If you do so anyway, enable data checksums offline
  (`pg_checksums --enable -D <pgdata>`) so corruption is at least detectable.
