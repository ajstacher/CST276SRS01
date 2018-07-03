#pragma once
#include "Subject.h"
class ConcreteSubject : public Subject
{

public:

	int getState() const;
	void setState(const int s);

private:

	int subjectState{ 0 };
	
};

