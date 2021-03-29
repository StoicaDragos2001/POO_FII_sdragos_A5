#include "Circuit.h"
#include <algorithm>

Circuit::Circuit() {
	this->MaxIndex = 100;
	this->CurrentIndex = 0;
	this->Participant = (Car**)(malloc(this->MaxIndex * sizeof(Car*)));
}

void Circuit::SetLength(int x) {
	this->Lenght = x;
}

void Circuit::SetWeather(Weather setter) {
	this->Vreme = setter;
}

void Circuit::AddCar(Car* NewCar) {
	if (this->CurrentIndex < this->MaxIndex)
		this->Participant[this->CurrentIndex++] = NewCar;
}

void Circuit::Race() {
	for (int i = 0; i < this->CurrentIndex; i++)
	{
		this->spd[i] = (this->Lenght * 1.0) / this->Participant[i]->getavgspeed();
	}
}

void Circuit::ShowFinalRanks() {
	for (int i = 0; i < this->CurrentIndex - 1; i++)
		for (int j = i + 1; j < this->CurrentIndex; j++)
			if (this->spd[i] < this->spd[j])
			{
				std::swap(this->Participant[i], this->Participant[j]);
				std::swap(this->spd[i], this->spd[j]);
			}

	for (int i = 0; i < this->CurrentIndex; i++)

		printf("%F %s\n", this->spd[i], this->Participant[i]->getname());
	printf("\n");
}

void Circuit::ShowWhoDidNotFinish() {
	for (int i = 0; i < this->CurrentIndex; i++)

		if (this->Participant[i]->fuelCapacity < 16)
			printf("%s ", this->Participant[i]->getname());
	printf("\n");
}