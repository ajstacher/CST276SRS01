#pragma once
#include <ostream>


namespace WeatherViewer
{
    class Current : AbstractViewer
    {
        friend std::ostream& operator<<(std::ostream& os, Current const& current);

    private:
        WeatherStation::Station TheStation_; 

    public:

		explicit Current(WeatherStation::Station const& station);

        static WeatherStation::Station & getStation();


    };
}


