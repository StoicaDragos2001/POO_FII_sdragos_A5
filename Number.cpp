#include "Number.h"
#include <stdlib.h>
#include <stdio.h>
#include <cstring>

void intToChar(int nrNou, char* value)
{
	int lenght = 0;
	while (nrNou)
	{
		value[lenght] = nrNou % 10 + '0';
		nrNou /= 10;
		lenght++;
	}
	value[lenght] = '\0';
	strrev(value);
}

Number::Number(const char* value, int base)
{
	this->base = base;
	while (this->base < 2 || this->base >16)
	{
		printf("Baza intre 2 si 16: ");
		scanf_s("%d", &this->base);
	}
	this->value = (char*)malloc(strlen(value) + 1);
	if (this->value != nullptr)
	{
		memset(this->value, 0, strlen(value) + 1);
		strcpy_s(this->value, strlen(value) + 1, value);
	}
	this->base = base;
}


Number::Number(const int nr)
{
	char* aux = (char*)malloc(100);
	if (aux != nullptr)
		_itoa_s(nr, aux, strlen(aux), 10);
	this->base = 10;
	value = new char[strlen(aux) + 1];
	if (aux != nullptr)
		memcpy(value, aux, strlen(aux) + 1);
}

Number::Number(const Number& nr)
{

	this->base = nr.base;
	this->value = (char*)malloc(strlen(nr.value) + 1);
	if (this->value != nullptr)
	{
		memset(this->value, 0, strlen(nr.value) + 1);
		memcpy(this->value, nr.value, strlen(nr.value) + 1);
	}
}

Number::Number(Number&& nr)
{
	this->base = nr.base;
	this->value = (char*)malloc(strlen(nr.value) + 1);
	if (this->value != nullptr)
		strcpy_s(this->value, strlen(nr.value) + 1, nr.value);
	nr.value = nullptr;
	nr.base = 0;
}

void Number::SwitchBase(int newBase)
{
	int nrNou = 0, p = 1;
	for (int i = strlen(this->value) - 1; i >= 0; i--)
	{
		if (value[i] >= 'A' && value[i] <= 'F')
			nrNou = p * (value[i] - 55) + nrNou;
		else
			nrNou = p * (value[i] - '0') + nrNou;
		p = p * this->base;
	}


	char* nr = new char[100];
	int i = 0;
	while (nrNou >= 1)
	{
		if (nrNou % newBase >= 10)
			nr[i] = (char)(nrNou % newBase + 55);
		else
			nr[i] = nrNou % newBase + '0';
		nrNou /= newBase;
		i++;
	}
	nr[i] = '\0';
	_strrev(nr);
	this->value = (char*)realloc(value, strlen(nr) + 1);
	if (this->value != nullptr)
	{
		memset(this->value, 0, strlen(nr) + 1);
		memcpy(this->value, nr, strlen(nr) + 1);
	}
	this->base = newBase;
}

Number operator+(Number nr1, Number nr2)
{
	int greaterBase = nr1.GetBase() > nr2.GetBase() ? nr1.GetBase() : nr2.GetBase();
	int oldNr1 = nr1.GetBase();
	int oldNr2 = nr2.GetBase();
	nr1.SwitchBase(10);
	nr2.SwitchBase(10);
	char* aux = (char*)(malloc(100));
	intToChar(atoi(nr1.value) + atoi(nr2.value), aux);
	nr1.SwitchBase(oldNr1);
	nr2.SwitchBase(oldNr2);
	Number nr3(aux, 10);
	nr3.SwitchBase(greaterBase);
	return nr3;
}

Number operator-(Number nr1, Number nr2)
{
	int greaterBase = nr1.GetBase() < nr2.GetBase() ? nr2.GetBase() : nr1.GetBase();
	int oldBase1 = nr1.GetBase();
	int oldBase2 = nr2.GetBase();
	nr1.SwitchBase(10);
	nr2.SwitchBase(10);
	char* tempNumber = (char*)malloc(100);
	if (nr1 < nr2)
		intToChar(atoi(nr2.value) - atoi(nr1.value), tempNumber);
	else
		intToChar(atoi(nr1.value) - atoi(nr2.value), tempNumber);
	nr1.SwitchBase(oldBase1);
	nr2.SwitchBase(oldBase2);
	Number nr3(tempNumber, 10);
	nr3.SwitchBase(greaterBase);
	return nr3;
}

bool Number::operator>(Number nr1)
{
	char* end = nullptr;
	int deci1 = strtol(nr1.value, &end, nr1.base);
	int deci2 = strtol(this->value, &end, this->base);
	if (deci2 > deci1)
		return true;
	return false;
}

bool Number::operator<(Number nr1)
{
	char* end = nullptr;
	int deci_1 = strtol(nr1.value, &end, nr1.base);
	int deci_2 = strtol(this->value, &end, this->base);
	if (deci_2 < deci_1)
		return true;
	return false;
}