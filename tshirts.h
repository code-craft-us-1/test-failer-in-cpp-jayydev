#pragma once

enum TShirtSizeCategory {
    S, // small
    M, // medium
    L, // large
    None // there is no such size
};

/// @brief calculates the size of the t-shirt based on the chest measurement
/// @param cms chest measurement in cm
/// @return the size of the t-shirt
TShirtSizeCategory size(int cms) {    
    if (cms > 25 && cms < 38) {
        return TShirtSizeCategory::S;
    }
    if (cms >= 38 && cms <= 42) {
        return TShirtSizeCategory::M;
    }
    if(cms > 42 && cms <= 70) {
        return TShirtSizeCategory::L;
    }

    return TShirtSizeCategory::None;
}
