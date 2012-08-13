#ifdef __cplusplus
	extern "C" {
#endif

#if defined(_MSC_VER) && !defined(__STDC__)
#	define __STDC__	1
#endif

#ifdef __STDC__
#	ifndef PROTOTYPES
#		define PROTOTYPES
#	endif
#endif

#define FUNCTION(Func,ArgList,Type)	Type Func ArgList
#define PROCEDURE(Func,ArgList)	Func ArgList

#ifdef PROTOTYPES
#	define DEFUN(Func,ArgList,Type)	extern Type Func ArgList
#	define A_FUN(Func,ArgList)	extern void Func ArgList
#	define DEFMETHOD(Func,ArgList,Type)	Type (*Func)ArgList
#	define METHODTYPE(Type,ArgList)		(Type(*) ArgList)
#else
#	define DEFUN(Func,ArgList,Type)	extern Type Func ()
#	define A_FUN(Func,ArgList)	extern void Func ()
#	define DEFMETHOD(Func,ArgList,Type)	Type (*Func)()
#	define METHODTYPE(Type,ArgList)		(Type(*) ())
#endif
#ifdef __cplusplus
	}
#endif
