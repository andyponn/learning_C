/* hw2_1.c, 基本程式的練習 */
/*include <stdio.h>*/
#ifndef _SSP_STDIO_H
#define _SSP_STDIO_H 1

#include <ssp.h>
#include_next <stdio.h>

#if __SSP_FORTIFY_LEVEL > 0

#include <stdarg.h>

#undef sprintf
#undef vsprintf
#undef snprintf
#undef vsnprintf
#undef gets
#undef fgets

extern int __sprintf_chk (char *__restrict__ __s, int __flag, size_t __slen,
			  __const char *__restrict__ __format, ...);
extern int __vsprintf_chk (char *__restrict__ __s, int __flag, size_t __slen,
			   __const char *__restrict__ __format,
			   va_list __ap);

#define sprintf(str, ...) \
  __builtin___sprintf_chk (str, 0, __ssp_bos (str), \
			   __VA_ARGS__)
#define vsprintf(str, fmt, ap) \
  __builtin___vsprintf_chk (str, 0, __ssp_bos (str), fmt, ap)

extern int __snprintf_chk (char *__restrict__ __s, size_t __n, int __flag,
			   size_t __slen, __const char *__restrict__ __format,
			   ...);
extern int __vsnprintf_chk (char *__restrict__ __s, size_t __n, int __flag,
			    size_t __slen, __const char *__restrict__ __format,
			    va_list __ap);

#define snprintf(str, len, ...) \
  __builtin___snprintf_chk (str, len, 0, __ssp_bos (str), __VA_ARGS__)
#define vsnprintf(str, len, fmt, ap) \
  __builtin___vsnprintf_chk (str, len, 0, __ssp_bos (str), fmt, ap)

extern char *__gets_chk (char *__str, size_t);
extern char *__SSP_REDIRECT (__gets_alias, (char *__str), gets);

extern inline __attribute__((__always_inline__)) char *
gets (char *__str)
{
  if (__ssp_bos (__str) != (size_t) -1)
    return __gets_chk (__str, __ssp_bos (__str));
  return __gets_alias (__str);
}

extern char *__SSP_REDIRECT (__fgets_alias,
			     (char *__restrict__ __s, int __n,
			      FILE *__restrict__ __stream), fgets);

extern inline __attribute__((__always_inline__)) char *
fgets (char *__restrict__ __s, int __n, FILE *__restrict__ __stream)
{
  if (__ssp_bos (__s) != (size_t) -1 && (size_t) __n > __ssp_bos (__s))
    __chk_fail ();
  return __fgets_alias (__s, __n, __stream);
}

#endif /* __SSP_FORTIFY_LEVEL > 0 */
#endif /* _SSP_STDIO_H */


/*include <stdlib.h>*/
#ifndef _GLIBCXX_TR1_STDLIB_H
#define _GLIBCXX_TR1_STDLIB_H 1

#include <tr1/cstdlib>

#if _GLIBCXX_HOSTED

#if _GLIBCXX_USE_C99_STDLIB

using std::tr1::atoll;
using std::tr1::strtoll;
using std::tr1::strtoull;

using std::tr1::abs;
#if !_GLIBCXX_USE_C99_LONG_LONG_DYNAMIC
using std::tr1::div;
#endif

#endif

#endif

#endif // _GLIBCXX_TR1_STDLIB_H

int main(void)
{
	int i=5;
	printf("%d+%d=%d\n",i,i,i+i);
    system("pause");
    return 0;
}
