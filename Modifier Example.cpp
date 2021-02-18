#include <iostream>
#include "modifier.h"

using std::cout;
using namespace COLOR;

int main() {
    modifier cyanColor(/* COLORs */COLOR::CYAN);
    cout << cyanColor << "HELLO" << endc/* end text color */ << std::endl;

    return 0;
}