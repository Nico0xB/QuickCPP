/*
QuickCPP Std Header
(C)2024 Nico0xB. Provided under MIT license
See LICENSE.txt for details
*/

#ifndef QCPP_STD_HPP
#define QCPP_STD_HPP

#pragma once

#include <iostream>
#include <cstdio>
#include "macros.hpp"
#include "types.hpp"

#define STD_NEWLINE         0x0000
#define STD_FLUSH           0x0001
#define STD_ENDL            0x0002

namespace stream {
    QUICKCPP_VARIABLE ISTREAM in;
    QUICKCPP_VARIABLE OSTREAM out;
    QUICKCPP_VARIABLE OSTREAM err;
    QUICKCPP_VARIABLE OSTREAM log;

    QUICKCPP_VARIABLE wISTREAM win;
    QUICKCPP_VARIABLE wOSTREAM wout;

    CHAR_T
    QUICKCPP_FUNCTION BASE_OSTREAM<CharT> &newline(BASE_OSTREAM<CharT> &ostr) {
        ostr.put(ostr.widen('\n'));
        return ostr;
    }

    CHAR_T
    QUICKCPP_FUNCTION BASE_OSTREAM<CharT> &flush(BASE_OSTREAM<CharT> &ostr) {
        ostr.flush();
        return ostr;
    }

    CHAR_T
    QUICKCPP_FUNCTION BASE_OSTREAM<CharT> &endl(BASE_OSTREAM<CharT> &ostr) {
        ostr.put(ostr.widen('\n'));
        ostr.flush();
        return ostr;
    }
}

// Print Here

#endif