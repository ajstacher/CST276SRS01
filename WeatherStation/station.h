#pragma once  

#ifdef WEATHERSTATION_EXPORTS  
#define WEATHERSTATION_API __declspec(dllexport)   
#else  
#define WEATHERSTATION_API __declspec(dllimport)   
#endif  

#include <vector>
#include <chrono>
#include "temperature.h"
#include "humidity.h"
#include "pressure.h"
#include "record.h"
#include "AbstractStation.h"


namespace WeatherStation
{
    class Station : AbstractStation  
    {
    private:
        std::vector<WeatherStation::Record> history_{};

		Temperature getMeanTemperature(std::chrono::system_clock::time_point const t0, std::chrono::system_clock::time_point const t1) const;
		Humidity getMeanHumidity(std::chrono::system_clock::time_point const t0, std::chrono::system_clock::time_point const t1) const;
		Pressure getMeanPressure(std::chrono::system_clock::time_point const t0, std::chrono::system_clock::time_point const t1) const;

		Temperature getTemperature() const;
		Humidity getHumidity() const;
		Pressure getPressure() const;


    public:
        

       // WeatherViewer::Statistics getWeatherViewerStatistics() const;
       // WeatherViewer::Current getWeatherViewerCurrent() const;

        
		const WeatherStation::Record & getState();
        //measure is setState()?
        void measure();

    };
}


