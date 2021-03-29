#pragma once
#include "Car.h"
class Mercedes :
    public Car
{
public:
    Mercedes();
    int getavgspeed();
    char name[20] = "mercedes";
    char* getname();
    ~Mercedes();
};