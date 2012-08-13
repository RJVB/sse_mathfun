#ifndef _CPU_H

#ifdef __cplusplus
	extern "C" {
#endif

/* define the CPU of the machine	*/

#define HP_APOLLO

/* the compiler:	*/

#define _HPUX_C_
#define _UNIX_C_

typedef double	flonum;
#define FLOFMT	"%lf"
#define FIXFMT	"%hd"

typedef long bignum;
typedef short fixnum;
#define BIGFMT	"%ld"

typedef void* pointer;

#define INTSIZE	4

#ifdef __GNUC__
#	define PROTOTYPES
/* gcc doesn't define any of _SYSV/_BSD/_POSIX/_SOURCE;
 * let's hope this is what we want
 */
#else
#	ifdef __STDC__
#		define PROTOTYPES
#	endif
#endif

#define STACKUP

#ifdef STACKUP
/* stack grows up	*/
#	define SHIFT_STACK(stack,element)	(stack-=sizeof(element))
#else
/* stack grows down	*/
#	define SHIFT_STACK(stack,element)	(stack+=sizeof(element))
#endif

#define POP_STACK(stack,element)	(*((element*)stack));SHIFT_STACK(stack,element)

#include "defun.h"

#define _CPU_H

#ifdef __cplusplus
	}
#endif
#endif
