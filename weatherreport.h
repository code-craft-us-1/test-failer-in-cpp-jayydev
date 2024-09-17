#pragma once

#include <string>

namespace WeatherSpace {
    /// @brief Interface for a weather sensor
    class IWeatherSensor {
        public:
        /// @brief Get the temperature in Celsius
        /// @return the temperature in Celsius
        virtual double TemperatureInC() const = 0;

        /// @brief Get the precipitation in percentage
        /// @return the precipitation in percentage
        virtual int Precipitation() const = 0;

        /// @brief Get the humidity in percentage
        /// @return the humidity in percentage
        virtual int Humidity() const = 0;

        /// @brief Get the wind speed in KMPH
        /// @return the wind speed in KMPH
        virtual int WindSpeedKMPH() const = 0;
    };

    /// @brief A stub implementation of a weather sensor    
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
    
    /// @brief Predicts the weather based on the sensor readings
    /// @param sensor the sensor
    /// @return the weather prediction
    std::string Report(const IWeatherSensor &sensor);
}