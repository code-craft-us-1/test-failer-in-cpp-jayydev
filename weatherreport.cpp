#include "./weatherreport.h"
#include <assert.h>
#include <string>
#include <iostream>
#include "./sesnsorStub.h"
#include "./weatherReportGenerator.h"

using std::string;
using WeatherSpace::SensorStub;
using WeatherSpace::Report;
using std::cout, std::endl;

// Test a rainy day
void TestRainy() {
    WeatherSpace::SensorStub sensor;
    string report = Report(sensor);
    cout << report << endl;
    assert(report.find("rain") != string::npos);
}

// Test another rainy day
void TestHighPrecipitationAndLowWindSpeed() {
    // This instance of stub needs to be different-
    // to give high precipitation (>60) and low wind-speed (<50)
    WeatherSpace::SensorStub sensor(70, 72, 26, 40);

    // strengthen the assert to expose the bug
    // (function returns Sunny day, it should predict rain)
    string report = Report(sensor);
    cout << report << endl;
    assert(report.length() > 0);
    assert(report.find("rain") != string::npos);
}

int main() {
    TestRainy();
    TestHighPrecipitationAndLowWindSpeed();
    cout << "All is well (maybe)\n";
    return 0;
}
