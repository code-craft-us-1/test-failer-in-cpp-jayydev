#include "./tshirts.h"
#include <assert.h>
#include <iostream>

int main() {
    assert(size(37) == 'S');
    // boundary condition
    assert(size(38) == 'S');
    assert(size(40) == 'M');
    // boundary condition
    assert(size(42) == 'M');
    assert(size(43) == 'L');
    std::cout << "All is well (maybe!)\n";
    return 0;
}
