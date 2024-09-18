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

    
    
    /// @brief Predicts the weather based on the sensor readings
    /// @param sensor the sensor
    /// @return the weather prediction
    std::string Report(const IWeatherSensor &sensor);
}