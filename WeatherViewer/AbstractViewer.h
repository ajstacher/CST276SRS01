#pragma once

class AbstractViewer
{

public:
	virtual ~AbstractViewer() = 0;

	virtual void update();
};


