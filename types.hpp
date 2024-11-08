/*
QuickCPP Types Header
(C)2024 Nico0xB. Provided under the MIT license
See LICENSE.txt for details
*/

#ifndef QCPP_TYPES_HPP
#define QCPP_TYPES_HPP

#include <iostream>
#include "int.hpp"
/*
Char Types
*/
  using CHAR = char;
  using wCHAR = wchar_t;
  using ESCAPE = CHAR; // Type for escape sequences like \0, \x1b or \n
  using FLAG = CHAR; // Type for flags used in QuickCPP functions

#endif // QCPP_TYPES_HPP