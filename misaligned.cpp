#include "./misaligned.h"
#include <assert.h>
#include <iostream>


void testColorMap() {
    const char* majorColor[] = {"White", "Red", "Black"};
    const char* minorColor[] = {"Blue", "Orange"};
    auto colorMap = createColorMap(majorColor, 3, minorColor, 2);
    assert(colorMap.size() == 6);
    for (auto pair : colorMap) {
        assert(pair.first == "White" || pair.first == "Red" || pair.first == "Black");
        assert(pair.second == "Blue" || pair.second == "Orange");
    }
}

void testPrintContent() {
    std::vector<std::pair<std::string, std::string>> colorMap{
        std::make_pair("White", "Blue"),
        std::make_pair("White", "Orange"),
        std::make_pair("Red", "Blue"),
        std::make_pair("Red", "Orange")};
    auto generatedContent = generatePrintContent(colorMap);
    assert(generatedContent.size() == 4);
    auto firstRow = generatedContent.at(0);
    auto pos1 = firstRow.find('|');    
    auto pos2 = firstRow.find('|', pos1 + 1);
    for (auto content : generatedContent) {
        auto p1 = content.find('|');
        auto p2 = content.find('|', p1 + 1);
        assert(p1 != std::string::npos);
        assert(p2 != std::string::npos);
        assert(pos1 == p1);
        assert(pos2 == p2);
    }
}

void testPrintColorMap() {
    auto result = printColorMap();
    assert(result == 25);
}

int main() {
    testColorMap();    
    testPrintColorMap();    
    testPrintContent();
    std::cout << "All is well (maybe!)\n";
    return 0;
}
