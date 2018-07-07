#pragma once
#include "station.h"

class TheWatherStation
{
public:

	static WeatherStation::Station & getWeatherStation()
	{
		static WeatherStation::Station weather_station;
		return weather_station;
	}
};

