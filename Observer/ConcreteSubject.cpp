#include "stdafx.h"
#include "ConcreteSubject.h"

int ConcreteSubject::getState() const
{
	return subjectState;
}

void ConcreteSubject::setState(const int s)
{
	subjectState = s;
	return;
}
