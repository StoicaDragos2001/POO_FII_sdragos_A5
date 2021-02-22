// ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
char prop[101], * p, matrix[101][101], aux[101];
int main()
{
    scanf("%[^\n]s", prop);
    int k = 0;
    p = strtok(prop, " ");
    while (p)
    {
        strcpy(matrix[k++], p);
        p = strtok(NULL, " ");
    }
    for (int i = 0; i < k - 1; i++)
        for (int j = i + 1; j < k; j++)
            if (strlen(matrix[i]) < strlen(matrix[j]))
            {
                strcpy(aux, matrix[j]);
                strcpy(matrix[j], matrix[i]);
                strcpy(matrix[i], aux);
            }
            else
                if (strlen(matrix[i]) == strlen(matrix[j]))
                {
                    if(strcmp(matrix[i],matrix[j])>0)
                    {
                        strcpy(aux, matrix[j]); 
                        strcpy(matrix[j], matrix[i]);
                        strcpy(matrix[i], aux);
                    }
                }
    for (int i = 0; i < k; i++)
        printf("%s\n", matrix[i]);
}
