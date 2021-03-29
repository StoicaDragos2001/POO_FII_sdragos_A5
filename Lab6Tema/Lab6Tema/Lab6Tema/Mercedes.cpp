#include "Mercedes.h"
Mercedes::Mercedes() {
	this->fuelCapacity = 16;
	this->fuelConsumption = 16;
	if (Weather::Rain)
		this->avgSpeed = 115;
	if (Weather::Snow)
		this->avgSpeed = 85;
	if (Weather::Sunny)
		this->avgSpeed = 145;
}

int Mercedes::getavgspeed() {
	return this->avgSpeed;
}

char* Mercedes::getname() {
	return this->name;
}