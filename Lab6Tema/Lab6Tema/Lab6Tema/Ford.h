#pragma once
#include "Car.h"
class Ford :
    public Car
{
public:
    char name[20] = "ford";
    Ford();
    int getavgspeed();
    char* getname();
    ~Ford();
};