#pragma once
#include "weatherreport.h"
#include <iostream>

namespace WeatherSpace {

    bool IsPartlyCloudy(const IWeatherSensor& sensor) {
        return sensor.TemperatureInC() > 25 && sensor.Precipitation() >= 20 && sensor.Precipitation() < 60;
    }

    bool IsStormWithHeavyRain(const IWeatherSensor& sensor) {        
        return sensor.TemperatureInC() > 25 && sensor.Precipitation() > 60 && sensor.WindSpeedKMPH() < 50;
    }

    bool IsSunnyDay(const IWeatherSensor& sensor) {
        return sensor.Precipitation() < 20;
    }

    // This is a function to predict the weather, based on readings from a sensor
    std::string Report(const IWeatherSensor &sensor) {
        if(IsSunnyDay(sensor)) {
            return "Sunny day";
        }
        if(IsPartlyCloudy(sensor)) {
            return "Partly cloudy";
        }
        if (IsStormWithHeavyRain(sensor)) {
            return "Alert, Stormy with heavy rain";
        }
        
        return "Unsure";
    }
}