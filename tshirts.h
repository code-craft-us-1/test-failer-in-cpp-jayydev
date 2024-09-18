#pragma once

/// @brief calculates the size of the t-shirt based on the chest measurement
/// @param cms chest measurement in cm
/// @return the size of the t-shirt
char size(int cms) {
    char sizeName = '\0';
    if (cms < 38) {
        sizeName = 'S';
    } else if (cms > 38 && cms < 42) {
        sizeName = 'M';
    } else if (cms > 42) {
        sizeName = 'L';
    }
    return sizeName;
}