#include "stdafx.h"
#include "ConcreteObserver.h"

ConcreteObserver::ConcreteObserver(const std::reference_wrapper<Subject> s) : subject(s)
{
	
}

void ConcreteObserver::update()
{

	observerState = subject.getState();
	return;

}
