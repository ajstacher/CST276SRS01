#include "stdafx.h"
#include <iomanip>
#include "station.h"
#include "current.h"
#include <iostream>


namespace WeatherViewer
{
    std::ostream& operator<<(std::ostream& os, WeatherViewer::Current const& current)
    {
        auto const& station{ current.getStation() };

        auto const temperature{ station.getTemperature() };
        auto const humidity{ station.getHumidity() };
        auto const pressure{ station.getPressure() };

		os <<
			std::setw(3) << temperature.get() << "°C, " <<
			std::setw(3) << humidity.get() << "%, " <<
			std::setw(4) << pressure.get() << " in. Hg" << std::endl << std::endl;
			
        return os;
    }

	Current::Current(WeatherStation::Station const &station) : station_{ getStation() }
    {
		//put attach here
		getStation().attach(*this);
    }

	WeatherStation::Station & Current::getStation()
	{
		static WeatherStation::Station instance;
		return instance;
	}
	void Current::update()
	{
		std::cout << *this;
	}
}
