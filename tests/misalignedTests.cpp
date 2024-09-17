#include "../misaligned.h"
#include <assert.h>
#include <iostream>

void testColorMap() 
{
    const char* majorColor[] = {"White", "Red", "Black"};
    const char* minorColor[] = {"Blue", "Orange"};
    auto colorMap = createColorMap(majorColor, 3, minorColor, 2);
    assert(colorMap.size() == 6);
    for(auto pair : colorMap)
    {
        assert(pair.first == "White" || pair.first == "Red" || pair.first == "Black");
        assert(pair.second == "Blue" || pair.second == "Orange");
    }
}

void testPrintContent() 
{
    std::vector<std::pair<std::string, std::string>> colorMap;
    colorMap.push_back(std::make_pair("White", "Blue"));
    colorMap.push_back(std::make_pair("White", "Orange"));
    colorMap.push_back(std::make_pair("Red", "Blue"));
    colorMap.push_back(std::make_pair("Red", "Orange"));
    auto generatedContent = generatePrintContent(colorMap);
    assert(generatedContent.size() == 4);
    for(auto content : generatedContent)
    {
        std::cout << content << std::endl;
    }
}

void testPrintColorMap() 
{
    auto result = printColorMap();
    assert(result == 25);
}

int main() 
{
    testColorMap();
    testPrintContent();
    testPrintColorMap();
    std::cout << "All is well (maybe!)\n";
    return 0;
}
