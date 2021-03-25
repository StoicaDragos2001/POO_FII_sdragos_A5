#include "Circuit.h"

Circuit::Circuit() {
	this->maxIndex = 100;
	this->currentIndex = 100;
	this->masini = (car**)(malloc(this->maxIndex * sizeof(car*)));
}

void Circuit::AddCar(car* car1) {
	if (this->currentIndex < this->maxIndex) {
		this->masini[this->currentIndex++] = car1;
	}
}