#include "./weatherreport.h"
#include "tests/sensorStub.h"
#include <assert.h>
#include <string>
#include <iostream>

// This is a function to predict the weather, based on readings from a sensor
std::string WeatherSpace::Report(const IWeatherSensor &sensor) {
    int precipitation = sensor.Precipitation();
    // precipitation < 20 is a sunny day
    std::string report = "Sunny day";

    if (sensor.TemperatureInC() > 25) {
        if (precipitation >= 20 && precipitation < 60)
            report = "Partly cloudy";
        else if (sensor.WindSpeedKMPH() > 50)
            report = "Alert, Stormy with heavy rain";
    }
    return report;
}

using std::cout, std::endl, std::string;

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
    WeatherSpace::SensorStub sensor(72, 70, 26, 40);

    // strengthen the assert to expose the bug
    // (function returns Sunny day, it should predict rain)
    string report = Report(sensor);
    assert(report.length() > 0);
    assert(report.find("rain") != string::npos);
}


int main() {
    TestRainy();
    TestHighPrecipitationAndLowWindSpeed();
    cout << "All is well (maybe)\n";
    return 0;
}