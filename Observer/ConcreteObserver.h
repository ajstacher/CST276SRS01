#pragma once
#include "Observer.h"
#include "Subject.h"
#include "ConcreteSubject.h"
#include <functional>

class ConcreteObserver : public Observer
{

public:

	ConcreteObserver(std::reference_wrapper<Subject> s);

	void update() override;

private:

	ConcreteSubject subject;
	int observerState{ 0 };

};

