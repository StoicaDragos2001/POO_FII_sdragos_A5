#include "Dacia.h"
Dacia::Dacia() {
	this->fuelCapacity = 13;
	this->fuelConsumption = 14;
	if (Weather::Rain)
		this->avgSpeed = 110;
	if (Weather::Snow)
		this->avgSpeed = 90;
	if (Weather::Sunny)
		this->avgSpeed = 130;
}

int Dacia::getavgspeed() {
	return this->avgSpeed;
}

char* Dacia::getname() {
	return this->name;
}