#pragma once
#include <stdio.h>

enum Weather {
	Rain = 0,
	Sunny = 1,
	Snow = 2
};

class Car
{
//protected:
//	Car();
//	~Car();
public:
	int fuelCapacity;
	int fuelConsumption;
	int avgSpeed;
	virtual int getavgspeed() = 0;
	virtual char* getname() = 0;
};