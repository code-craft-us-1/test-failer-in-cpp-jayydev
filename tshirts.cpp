#include "./tshirts.h"
#include <assert.h>
#include <iostream>

int main() {
    assert(size(-1) == TShirtSizeCategory::None);
    assert(size(25) == TShirtSizeCategory::None);
    assert(size(26) == TShirtSizeCategory::S);
    assert(size(37) == TShirtSizeCategory::S);
    // boundary condition
    assert(size(38) == TShirtSizeCategory::M);
    assert(size(40) == TShirtSizeCategory::M);
    // boundary condition
    assert(size(42) == TShirtSizeCategory::M);
    assert(size(43) == TShirtSizeCategory::L);
    assert(size(70) == TShirtSizeCategory::L);
    assert(size(71) == TShirtSizeCategory::None);
    assert(size(99) == TShirtSizeCategory::None);    
    std::cout << "All is well (maybe!)\n";
    return 0;
}
