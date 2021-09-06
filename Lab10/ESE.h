#pragma once
#include <string>
#include "CEAS.h"

class ESE: virtual public CEAS
{
public:
	ESE();
	void displayInfo();
	virtual void printCore1();
	virtual void printCore2();
	void printCore3();
};

