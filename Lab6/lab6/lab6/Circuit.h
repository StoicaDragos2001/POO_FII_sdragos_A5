#pragma once
#include "car.h"
#include "stdlib.h"
class Circuit
{
	car** masini;
	int currentIndex;
	int maxIndex;
public:
	Circuit();
	~Circuit();
	int SetLength(int Lenght);
	int SetWeather(Weather x);
	void AddCar(car* car1);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
};

