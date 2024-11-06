/*
QuickCPP Std Header
(C)2024 Nico0xB. Provided under MIT license
See LICENSE.txt for details
*/

#ifndef QCPP_STD_HPP
#define QCPP_STD_HPP

#include <iostream>
#include <cstdio>
#include "macros.hpp"
#include "types.hpp"

/*
Stream Types
*/
  TEMPLATE_CHAR_T
  using BASE_OSTREAM = std::basic_ostream<CharT>;

  TEMPLATE_CHAR_T
  using BASE_ISTREAM = std::basic_istream<CharT>;
  
  using OSTREAM = BASE_OSTREAM<char>;
  using ISTREAM = BASE_ISTREAM<char>;
  
  using wOSTREAM = BASE_OSTREAM<wchar_t>;
  using wISTREAM = BASE_ISTREAM<wchar_t>;

/*
QuickCpp Streams
*/
  QUICKCPP_VARIABLE ISTREAM in;
  QUICKCPP_VARIABLE OSTREAM out;
  QUICKCPP_VARIABLE OSTREAM err;
  QUICKCPP_VARIABLE OSTREAM log;

/*
QuickCpp wStreams
*/
  QUICKCPP_VARIABLE wISTREAM win;
  QUICKCPP_VARIABLE wOSTREAM wout;
/*
String Types
*/

  TEMPLATE_CHAR_T
  using BASE_STRING = std::basic_string<CharT>;

  using STRING  = BASE_STRING<char>; // Normal String
  using WSTRING = BASE_STRING<wchar_t>; // Wide String

/*
QuickCpp Stream Manipulators
*/
TEMPLATE_CHAR_T
QUICKCPP_FUNCTION BASE_OSTREAM<CharT> &NewLine(BASE_OSTREAM<CharT> &ostr) {
    ostr.put(ostr.widen('\n'));
    return ostr;
}

TEMPLATE_CHAR_T
QUICKCPP_FUNCTION BASE_OSTREAM<CharT> &Flush(BASE_OSTREAM<CharT> &ostr) {
    ostr.flush();
    return ostr;
}

TEMPLATE_CHAR_T
QUICKCPP_FUNCTION BASE_OSTREAM<CharT> &Endl(BASE_OSTREAM<CharT> &ostr) {
    ostr.put(ostr.widen('\n'));
    ostr.flush();
    return ostr;
}


// Print Here

#endif