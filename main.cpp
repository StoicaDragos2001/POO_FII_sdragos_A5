#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include "NumberList.h"
#include <stdio.h>
using namespace std;

int main()
{
    int y;
    NumberList obiect;
    obiect.Init();
    scanf_s("%d", &y, 4);
    while (obiect.Add(y) != false)
    {
        obiect.Sort();
        scanf_s("%d", &y, 4);
    }
    obiect.Print();
    system("pause");
    return 0;
}