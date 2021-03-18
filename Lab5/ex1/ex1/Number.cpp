#include "Number.h"
#include <cstring>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int decimalValue(char ch)
{
	if (ch >= '0' && ch <= '9')
		return (int)ch - '0';
	else
		return (int)ch - 'A' + 10;
}

char charValue(int deci)
{
	if (deci >= 0 && deci <= 9)
		return (char)(deci + '0');
	else
		return (char)(deci - 10 + 'A');
}

Number::Number(const char* value, int base)
{
	if (base >= 2 && base <= 16)
		this->base = base;
	else
		this->base = -1;
	this->value = new char[strlen(value) + 1];
	memcpy(this->value, value, strlen(value) + 1);
}
Number::~Number()
{
	delete[] this->value;
	this->value = nullptr;
}

Number::Number(const Number& ex) {
	strcpy(this->value, ex.value);
	this->base = ex.base;
}

Number::Number(const Number&& ex) {
	strcpy(this->value, ex.value);
	this->base = ex.base;
}

Number operator-(Number ex1, Number ex2) {
	int val1 = atoi(ex1.value);
	int val2 = atoi(ex2.value);
	return ex1 - ex2;
}

Number operator+(Number ex1, Number ex2) {
	int val1 = atoi(ex1.value);
	int val2 = atoi(ex2.value);
	return ex1 + ex2;
}

void Number::SwitchBase(int newBase) {
	int lenght = strlen(this->value);
	int p = 1; int i;
	int toDeci = 0;
	for (i = lenght - 1; i >= 0; i--) {
		if (decimalValue(this->value[i]) >= this->base)
		{
			printf("eroare");
			break;
		}
		toDeci = toDeci + decimalValue(this->value[i]) * p;
		p = p * this->base;
	}
	char* nr = new char[101];
	i = 0;
	while (toDeci > 0)
	{
		nr[i] = charValue(toDeci % newBase);
		toDeci /= newBase;
		i++;
	}
	nr[i] = '\n';
	_strrev(nr);
	int size = strlen(nr) + 1;
	this->value = (char*)realloc(this->value, size);
	memcpy(this->value, nr, strlen(nr) + 1);
	base = newBase;
}

void Number::Print() {
	printf("%s \n", this->value);
}

int Number::GetDigitsCount() {
	return strlen(this->value);
}

int Number::GetBase() {
	return this->base;
}