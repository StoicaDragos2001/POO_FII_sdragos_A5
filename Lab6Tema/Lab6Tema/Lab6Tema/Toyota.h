#pragma once
#include "Car.h"
class Toyota :
    public Car
{
public:
    Toyota();
    int getavgspeed();
    char name[20] = "toyota";
    char* getname();
    ~Toyota();
};