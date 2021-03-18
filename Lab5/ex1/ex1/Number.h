#pragma once
#include <stdio.h>
#include <cstring>
class Number

{
	char* value;
	int base;

public:

	Number(const char* value, int base); // where base is between 2 and 16

	~Number();

	Number(const Number& ex);//copy constr
	Number(const Number&& ex);//move constr
	friend Number operator-(Number ex1, Number ex2);
	friend Number operator+(Number ex1, Number ex2);


	// add operators and copy/move constructor



	void SwitchBase(int newBase);

	void Print();

	int  GetDigitsCount(); // returns the number of digits for the current number

	int  GetBase(); // returns the current base

};