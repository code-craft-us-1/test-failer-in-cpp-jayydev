#pragma once

#include <string>
#include <vector>
#include <utility>

std::vector<std::pair<std::string, std::string>> createColorMap(const char* majorColor[], unsigned numMajorColors, const char* minorColor[], unsigned numMinorColors);
std::vector<std::string> generatePrintContent(const std::vector<std::pair<std::string, std::string>>& colorMap);
size_t printColorMap();
