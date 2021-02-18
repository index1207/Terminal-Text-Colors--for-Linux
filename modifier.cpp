#include "modifier.h"

ostream& COLOR::operator<<(ostream& os, modifier modifi) {
    os << "\033[" << modifi.m_color << "m";
    return os;
}