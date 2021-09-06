#pragma once
#include "AMS.h"
#include "ESE.h"

class Alphonse : public ESE, public AMS	//Inherit from multiple objects
{
public:
	Alphonse();	//Constructor header
	void displayInfo();	//Defien function header
};

