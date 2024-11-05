/*
QuickCPP Std Header
(C) Nico0xB provided under MIT license
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


    QUICKCPP_FUNCTION OSTREAM &newline(OSTREAM &ostr) {
        ostr.put(ostr.widen('\n'));
        return ostr;
    }

    QUICKCPP_FUNCTION OSTREAM &flush(OSTREAM &ostr) {
        ostr.flush();
        return ostr;
    }

    QUICKCPP_FUNCTION OSTREAM &endl(OSTREAM &ostr) {
        ostr.put(ostr.widen('\n'));
        ostr.flush();
        return ostr;
    }
}

typedef OSTREAM& (*manipulator) (OSTREAM &ostr);
QUICKCPP_FUNCTION void PrintA(STRING str, manipulator end) {
    stream::out << str << end;
}

#endif