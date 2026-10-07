#ifndef AGE_WIN_COMPAT_H
#define AGE_WIN_COMPAT_H

/*
 * Forced-include compatibility shims for the MSVC build of Apache AGE.
 * Mirrors the GNU-isms the upstream sources rely on (GCC attributes and
 * POSIX string helpers) onto the MSVC CRT. Placed first in every TU via /FI.
 */

#if defined(_MSC_VER)

#ifndef __attribute__
#define __attribute__(x)
#endif

#ifndef strcasecmp
#define strcasecmp _stricmp
#endif

#ifndef strncasecmp
#define strncasecmp _strnicmp
#endif

#include <stdlib.h>
#include <string.h>

#ifndef strndup
static __inline char *strndup(const char *s, size_t n)
{
    size_t len = strnlen(s, n);
    char *p = (char *)malloc(len + 1);

    if (p != NULL)
    {
        memcpy(p, s, len);
        p[len] = '\0';
    }
    return p;
}
#endif

#endif /* _MSC_VER */

#endif /* AGE_WIN_COMPAT_H */
