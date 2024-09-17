#pragma once

#include <string>

namespace WeatherSpace {
    class IWeatherSensor {
        public:
        virtual double TemperatureInC() const = 0;
        virtual int Precipitation() const = 0;
        virtual int Humidity() const = 0;
        virtual int WindSpeedKMPH() const = 0;
    };

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

    // This is a function to predict the weather, based on readings from a sensor
    std::string Report(const IWeatherSensor &sensor);
}