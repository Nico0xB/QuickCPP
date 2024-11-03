#ifndef QCPP_TYPES_HPP
#define QCPP_TYPES_HPP

// QuickCPP Types Header
// (C) Nico0x0B All Rights Reserved
// See LICENSE.txt for details

#include "qvals.hpp"
#include <iostream>

/*
Unsigned Types
*/
UNSIGNED_TYPES_START
  using ui8  = unsigned char; // 8-bit unsigned integer. From 0 to 255
  using ui16 = unsigned short; // 16-bit unsigned integer. From 0 to 65,535
  using ui32 = unsigned int; // 32-bit unsigned integer. From 0 to 4,294,967,295
  using ui64 = unsigned long long; // 64-bit unsigned integer. From 0 to 0 to 18,446,744,073,709,551,615
UNSIGNED_TYPES_END

/*
Signed Types
*/
SIGNED_TYPES_START
  using i8  = char; // 8-bit integer. From -128 to 127
  using i16 = short; // 16-bit integer. From -32,768 to 32,767
  using i32 = int; // 32-bit integer. From -2,147,483,648 to 2,147,483,647
  using i64 = long long; // 64-bit integer. From -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
SIGNED_TYPES_END

/*
String Types
*/
STRING_TYPES_START
  using qSTRING  = std::basic_string<char>; // Normal String
  using qWSTRING = std::basic_string<wchar_t>; // Wide String
STRING_TYPES_END

/*
Other Types
*/
OTHER_TYPES_START
  using qESCAPE = char; // Type for escape sequences like \0, \x1b or \n
  using qFLAG = char; // Type for flags used in QuickCPP functions
OTHER_TYPES_END

#endif // QCPP_TYPES_HPP