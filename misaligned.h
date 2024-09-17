#pragma once

#include <string>
#include <vector>
#include <utility>

/// @brief creates a map of major and minor colors
/// @param majorColor a collection of major colors
/// @param numMajorColors number of major colors
/// @param minorColor a collection of minor colors
/// @param numMinorColors number of minor colors
/// @return a collection of possible combinations of major and minor colors
std::vector<std::pair<std::string, std::string>> createColorMap(const char* majorColor[], unsigned numMajorColors, const char* minorColor[], unsigned numMinorColors);

/// @brief generates a print content for the color map
/// @param colorMap a collection combinations of  major and minor colors
/// @return a collection of strings to be printed
std::vector<std::string> generatePrintContent(const std::vector<std::pair<std::string, std::string>>& colorMap);

/// @brief prints the color map
/// @return the number of rows printed
size_t printColorMap();
