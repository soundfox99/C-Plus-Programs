#pragma once
#include "ECE.h"
#include "ESE.h"
class Edward : public ECE, public ESE	//Inherit from multiple sources
{
public:
	Edward();	//Define constructor

	//Define function headers
	void displayInfo();
	void printCore1();
	void printCore2();
};

