#pragma once
#include <string>
#include "CEAS.h"

class ECE : virtual public CEAS
{
public:
	ECE();
	void displayInfo();
	void printCore1();
	void printCore2();
	void printCore3();
};

