#include "./sensorStub.h"

using std::string;
using namespace WeatherSpace;

SensorStub::SensorStub()
    : m_Humidity(72), 
    m_Precipitation(70), 
    m_Temperature(26), 
    m_WindSpeed(52) {
}

SensorStub::SensorStub(int humidity, int precipitation, int temperature, int windSpeed) 
    : m_Humidity(humidity), 
    m_Precipitation(precipitation), 
    m_Temperature(temperature),
     m_WindSpeed(windSpeed) {
}

int SensorStub::Humidity() const {
    return m_Humidity;
}

int SensorStub::Precipitation() const {
    return m_Precipitation;
}

double SensorStub::TemperatureInC() const {
    return m_Temperature;
}

int SensorStub::WindSpeedKMPH() const {
    return m_WindSpeed;
}
