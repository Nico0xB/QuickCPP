#ifndef QCPP_QVALS_HPP
#define QCPP_QVALS_HPP

#define IF_EQ(x, y) if (x == y
#define ELIF_EQ(x, y) else if (x == y)

#define NAMESPACE_QCPP_START namespace qcpp {
#define NAMESPACE_QCPP_END }

/* 
Various Headers to group types in namespaces or classes if you want
*/

#define UNSIGNED_TYPES_START // Unsigned types in types.hpp 
#define UNSIGNED_TYPES_END

#define SIGNED_TYPES_START // Signed types in types.hpp
#define SIGNED_TYPES_END

#define OTHER_TYPES_START // Other types in types.hpp
#define OTHER_TYPES_END

#define STRING_TYPES_START // String types in types.hpp
#define STRING_TYPES_END

/*
C/C++ Linkage specification macros
*/

#define EXTERN_CPP  extern "C++"
#define EXTERN_C    extern "C"
#define QUICKCPP_DEFAULT_EXTERN EXTERN_CPP // Default linkage

/*
QuickCPP Call Methods
*/
#define QUICKCPP_CALL // Define it to __stdcall or __cdecl
#define QUICKCPP_FUNCTION QUICKCPP_DEFAULT_EXTERN QUICKCPP_CALL // For Functions
#define QUICKCPP_VARIABLE QUICKCPP_DEFAULT_EXTERN // For Variables

#endif // QCPP_QVALS_HPP