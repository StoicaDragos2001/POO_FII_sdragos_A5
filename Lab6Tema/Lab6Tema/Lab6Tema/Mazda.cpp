#include "Mazda.h"
Mazda::Mazda() {
	this->fuelCapacity = 15;
	this->fuelConsumption = 14;
	if (Weather::Rain)
		this->avgSpeed = 120;
	if (Weather::Snow)
		this->avgSpeed = 80;
	if (Weather::Sunny)
		this->avgSpeed = 145;
}

int Mazda::getavgspeed() {
	return this->avgSpeed;
}

char* Mazda::getname() {
	return this->name;
}