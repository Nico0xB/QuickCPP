#include <iostream>
#include <cstdio>
#include "qvals.hpp"
#include "types.hpp"

#define STD_NEWLINE         0x0000
#define STD_FLUSH           0x0001
#define STD_ENDL            0x0002

QUICKCPP_VARIABLE std::istream IN;
QUICKCPP_VARIABLE std::ostream OUT;
QUICKCPP_VARIABLE std::ostream ERR;
QUICKCPP_VARIABLE std::ostream LOG;

QUICKCPP_FUNCTION std::ostream& NEWLINE(std::ostream& ostr) {
    ostr.put(ostr.widen('\n'));
    return ostr;
}

QUICKCPP_FUNCTION std::ostream& FLUSH(std::ostream& ostr) {
    ostr.flush();
    return ostr;
}

QUICKCPP_FUNCTION std::ostream& ENDL(std::ostream& ostr) {
    ostr.put(ostr.widen('\n'));
    ostr.flush();
    return ostr;
}

QUICKCPP_FUNCTION void PrintA(qSTRING str, qFLAG flag = STD_ENDL) {
    IF_EQ(flag, STD_NEWLINE) {
        OUT << str << NEWLINE;
    } ELIF_EQ(flag, STD_FLUSH) {
        OUT << str << FLUSH;
    } ELIF_EQ(flag, STD_ENDL) {

    }
}