#pragma once
#include <iostream>

using namespace std;

namespace COLOR {
    const string endc = "\033[0m";

    enum CODE {
        BLACK   =   30,
        RED     =   31,
        GREEN   =   32,
        ORANGE  =   33,
        BLUE    =   34,
        MAGENTA =   35,
        CYAN    =   36,
        L_GRAY  =   37,
        D_GRAY  =   100,
        L_RES   =   101,
        L_GREEN =   102,
        YELLOW  =   103,
        L_BLUE  =   104,
        L_PURPLE=   105,
        TEAL    =   106,
        WHITE   =   107
    };
    class modifier {
    public:
        modifier(CODE color) : m_color(color) {};
        modifier() = default;

        friend ostream& operator<<(ostream& os, modifier modifi);
    private:
        CODE m_color = WHITE;
    };
}