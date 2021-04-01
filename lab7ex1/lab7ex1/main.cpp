#include<stdlib.h>
#include<stdio.h>
#include <iostream>
using namespace std; 

float operator"" _Kelvin(unsigned long long int k)
{
    float c = k - 273.15;
    return c;
}

float operator"" _Fahrenheit(unsigned long long int f)
{
    float c = (f - 32) / 1.8;
    return c;
}

int main() {

    float a = 300_Kelvin;

    float b = 120_Fahrenheit;

    cout << a << endl << b;

    return 0;

}