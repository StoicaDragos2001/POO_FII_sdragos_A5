#pragma once
#include "Car.h"
class Dacia :
    public Car
{
public:
    Dacia();
    char name[20] = "dacia";
    int getavgspeed();
    char* getname();
    ~Dacia();
};