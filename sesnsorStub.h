#pragma once
#include "weatherreport.h"

namespace WeatherSpace {
    /// @brief A stub implementation of a weather sensor
    class SensorStub : public IWeatherSensor {
    public:
        SensorStub()
            : m_Humidity(72), m_Precipitation(70), m_Temperature(26), m_WindSpeed(52) {
        }
        SensorStub(int humidity, int precipitation, int temperature, int windSpeed)
            : m_Humidity(humidity), m_Precipitation(precipitation),
              m_Temperature(temperature), m_WindSpeed(windSpeed) {
        }
        ~SensorStub() = default;
        int Humidity() const override {
            return m_Humidity;
        }
        int Precipitation() const override {
            return m_Precipitation;
        }
        double TemperatureInC() const override {
            return m_Temperature;
        }
        int WindSpeedKMPH() const override {
            return m_WindSpeed;
        }

    private:
        int m_Humidity;
        int m_Precipitation;
        double m_Temperature;
        int m_WindSpeed;
    };
}