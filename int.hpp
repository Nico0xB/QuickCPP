/*
QuickCPP Int Header
(C)2024 Nico0xB. Provided under the MIT license
See LICENSE.txt for details
*/

#ifndef QCPP_INT_HPP
#define QCPP_INT_HPP

/*
Unsigned Types
*/
  using ui8  = unsigned char; // 8-bit unsigned integer. From 0 to 255
  using ui16 = unsigned short; // 16-bit unsigned integer. From 0 to 65,535
  using ui32 = unsigned int; // 32-bit unsigned integer. From 0 to 4,294,967,295
  using ui64 = unsigned long long; // 64-bit unsigned integer. From 0 to 0 to 18,446,744,073,709,551,615

/*
Signed Types
*/
  using i8  = char; // 8-bit integer. From -128 to 127
  using i16 = short; // 16-bit integer. From -32,768 to 32,767
  using i32 = int; // 32-bit integer. From -2,147,483,648 to 2,147,483,647
  using i64 = long long; // 64-bit integer. From -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
  using INT = i32;

#endif // QCPP_INT_HPP