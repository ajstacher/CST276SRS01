#include "stdafx.h"
#include "Subject.h"


void Subject::attach(std::reference_wrapper<Observer> o)
{
	observers.push_back(o);
	return;
}

void Subject::detach(std::reference_wrapper<Observer> obs)
{
	/*/return to this with mitch
	for (auto & o : observers)
	{
		if (& obs == & o)
		{
			observers.erase(o);
		}

	}*/

	auto const end{ observers.cend() };
	auto iter{ observers.cbegin() };

	//mess with remove_if
	while (iter != end)
	{
		if(&iter->get() == &obs.get())
		{
			observers.erase(iter);
		}
		++iter;
	}
	
	return;
}

void Subject::notify()
{
	for (auto & o : observers)
	{
		o.get().update();
	}
}
