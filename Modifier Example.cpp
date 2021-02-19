#include <iostream>
#include "modifier.h"

using std::cout;
using namespace COLOR;

int main() {
    modifier tc;

    //set text color
    tc.setColor(BLUE);
                          /* reset text color */
    cout << tc << "HELLO" << modifier::reset << std::endl;
    tc.setColor(RED);

    cout << tc << "WORLD" << modifier::reset << std::endl;

    return 0;
}