#include "modifier.h"

void COLOR::modifier::setColor(CODE color) {
    modifier::color = color;
}

void COLOR::modifier::resetColor(void) {
    modifier::color = WHITE;
}

const string COLOR::modifier::reset = "\033[0m";

ostream& COLOR::operator<<(ostream& os, modifier modifi) {
    os << "\033[" << modifi.color << "m";
    return os;
}