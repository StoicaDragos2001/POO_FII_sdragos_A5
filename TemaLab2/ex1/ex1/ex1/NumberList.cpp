#include "NumberList.h"
#include <stdlib.h>
#include <stdio.h>

void NumberList::Init() {
	this->count = 0;
}

bool NumberList::Add(int x) {
	if(this->count >= 10)
		return false;
	this->numbers[this->count] = x;
	this->count++;
	return true;
}

void NumberList::Sort() {
	int n = this->count;
	int aux = 0;
	for(int i=0;i<n-1;i++)
		for (int j = i + 1; j < n; j++)
		{
			if (this->numbers[i] > this->numbers[j])
			{
				aux = this->numbers[i];
				this->numbers[i] = this->numbers[j];
				this->numbers[j] = aux;
			}
		}
}

void NumberList::Print() {
	int n = this->count;
	for (int i = 0; i < n; i++)
		printf("%d ", this->numbers[i]);
}
