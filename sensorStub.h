#pragma once

#include "./weatherreport.h"
#include <string>

namespace WeatherSpace {
    class SensorStub : public IWeatherSensor {
    public:
        SensorStub();
        ~SensorStub() = default;
        SensorStub(int humidity, int precipitation, int temperature, int windSpeed);
        int Humidity() const override;
        int Precipitation() const override;
        double TemperatureInC() const override;
        int WindSpeedKMPH() const override;

    private:
        int m_Humidity = 72;
        int m_Precipitation = 70;
        double m_Temperature = 26;
        int m_WindSpeed = 52;
    };
}
