/*
QuickCPP Macros Header
(C)2024 Nico0xB. Provided under the MIT license
See LICENSE.txt for details
*/

#ifndef QCPP_MACROS_HPP
#define QCPP_MACROS_HPP

/*
if macros
*/
#define IF_EQ(x, y) if (x == y) // if macro
#define ELIF_EQ(x, y) else if (x == y) // else if macro

/*
Template macros
*/
#define TEMPLATE_CHAR_T template <class CharT>
#define TEMPLATE_T template <class T>
/*
C/C++ Linkage specification macros
*/
#define EXTERN_CPP  extern "C++"
#define EXTERN_C    extern "C"
#define EXTERN      extern

/*
QuickCpp Call Methods
*/
#define STDCALL __stdcall
#define CDECL   __cdecl

/*
QuickCpp Defaults
*/
#ifndef QUICKCPP_DEFAULT_EXTERN // DEFINE BEFORE INCLUDING
#define QUICKCPP_DEFAULT_EXTERN EXTERN
#endif

#ifndef QUICKCPP_DEFAULT_CALL // DEFINE BEFORE INCLUDING
#define QUICKCPP_DEFAULT_CALL STDCALL
#endif

/*
QuickCpp Attributes
*/
#define QUICKCPP_FUNCTION QUICKCPP_DEFAULT_EXTERN QUICKCPP_DEFAULT_CALL
#define QUICKCPP_VARIABLE QUICKCPP_DEFAULT_EXTERN

#endif // QCPP_QVALS_HPP