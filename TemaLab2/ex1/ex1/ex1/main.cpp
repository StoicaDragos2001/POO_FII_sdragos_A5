#include"NumberList.h"
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
int n, a;
int main()
{
	NumberList ex1;
	ex1.Init();
	printf("Introduceti numarul de elemente din lista: ");
	scanf("%d", &n);
	printf("\nIntroduceti elementele din lista: ");
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a);
		ex1.Add(a);
	}
	printf("\nValorile din lista nesortata sunt: ");
	ex1.Print();
	printf("\n");
	ex1.Sort();
	printf("\nValorile din lista sortata sunt: ");
	ex1.Print();
	printf("\n");
	printf("\n"); 
	system("pause");
	return 0;
}