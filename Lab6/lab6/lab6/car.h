#pragma once
#include <stdio.h>

enum Weather {
	Rain,
	Sunny,
	Snow
};

class car
{
protected:
	car();
	~car();
public:
	int fuelCapacity;
	int fuelConsumption;
	int AvgSpeed;
};

