#include "Ford.h"
Ford::Ford() {
	this->fuelCapacity = 17;
	this->fuelConsumption = 12;
	if (Weather::Rain)
		this->avgSpeed = 100;
	if (Weather::Snow)
		this->avgSpeed = 80;
	if (Weather::Sunny)
		this->avgSpeed = 110;
}

int Ford::getavgspeed() {
	return this->avgSpeed;
}

char* Ford::getname() {
	return this->name;
}