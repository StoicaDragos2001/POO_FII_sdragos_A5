#include "Toyota.h"
Toyota::Toyota() {
	this->fuelCapacity = 17;
	this->fuelConsumption = 13;
	if (Weather::Rain)
		this->avgSpeed = 145;
	if (Weather::Snow)
		this->avgSpeed = 85;
	if (Weather::Sunny)
		this->avgSpeed = 170;
}

int Toyota::getavgspeed() {
	return this->avgSpeed;
}

char* Toyota::getname() {
	return this->name;
}