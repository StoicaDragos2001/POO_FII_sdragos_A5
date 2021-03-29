#pragma once
#include "Car.h"
#include <stdlib.h>
class Circuit
{
	Car** Participant;
	int CurrentIndex;
	int MaxIndex;
	int Vreme;
	int Lenght;
	float spd[100];
public:
	Circuit();
	void AddCar(Car* NewCar);
	void SetWeather(Weather setter);
	void SetLength(int x);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};