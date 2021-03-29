#pragma once
#include "Car.h"
class Mazda :
    public Car
{
public:
    Mazda();
    int getavgspeed();
    char name[20] = "mazda";
    char* getname();
    ~Mazda();
};