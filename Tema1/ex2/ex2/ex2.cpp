//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
using namespace std;
int converter(char v[])
{
    int c = 0;
    int i;
    for (i = 0; i < strlen(v); i++)
    {
        if (v[i] == '\n')
            break;
        c = c * 10 + (v[i] - '0');
    }
    return c;
}
int main()
{
    int s = 0;
    char numbers[300];
    FILE* pFile;
    fopen_s(&pFile, "in.txt", "r");
    while (fgets(numbers, 300, pFile))
    {
        printf("%s\n", numbers);
        s = s + converter(numbers);
    }
    printf("%d", s);
    fclose(pFile);

    return 0;
}