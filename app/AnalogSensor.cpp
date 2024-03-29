#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>

AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples)
{
}

AnalogSensor::~AnalogSensor()
{
}

int AnalogSensor::Read()
{
    //std::vector<int> *readings = new std::vector<int>(mSamples, 10);
    /// Declaring vectors without 'new' keyword to avoid memory leakage
    std::vector<int> readings(mSamples, 10);
    double result = std::accumulate( readings.begin(), readings.end(), 0.0 ) / readings.size();
    return result;
}


