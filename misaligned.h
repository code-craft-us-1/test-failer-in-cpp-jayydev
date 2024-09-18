#pragma once

#include <string>
#include <vector>
#include <utility>
#include <iostream>

/// @brief creates a map of major and minor colors
/// @param majorColor a collection of major colors
/// @param numMajorColors number of major colors
/// @param minorColor a collection of minor colors
/// @param numMinorColors number of minor colors
/// @return a collection of possible combinations of major and minor colors
std::vector<std::pair<std::string, std::string>> createColorMap(const char* majorColor[], unsigned numMajorColors, 
const char* minorColor[], unsigned numMinorColors) {
    std::vector<std::pair<std::string, std::string>> colorMap;
    for (unsigned i = 0; i < numMajorColors; i++) {
        for (unsigned j = 0; j < numMinorColors; j++) {
            colorMap.push_back(std::make_pair(majorColor[i], minorColor[j]));
        }
    }
    return colorMap;
}

/// @brief generates a print content for the color map
/// @param colorMap a collection combinations of  major and minor colors
/// @return a collection of strings to be printed
std::vector<std::string> generatePrintContent(
    const std::vector<std::pair<std::string, std::string>>& colorMap) {
    std::vector<std::string> printContent;
    int i = 1;
    for (auto pair : colorMap) {
        printContent.push_back(i + " | " + pair.first + " | " + pair.second);
    }
    return printContent;
}

/// @brief prints the color map
/// @return the number of rows printed
size_t printColorMap() {
    const char *majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char *minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    auto colorMap = createColorMap(majorColor, 5, minorColor, 5);
    auto printContent = generatePrintContent(colorMap);
    for (auto content : printContent) {
        std::cout << content << std::endl;
    }
    return printContent.size();
}
