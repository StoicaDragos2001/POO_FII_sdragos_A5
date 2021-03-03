#define _CRT_SECURE_NO_WARNINGS
#include "Stats.h"
#include "Globals.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
	Stats student1;
	Stats student2;
	student1.setEng(10);
	student2.setEng(9);
	student1.setIst(8);
	student2.setIst(9);
	student1.setMate(5);
	student2.setMate(5);
	int valoare_comparare = CompEng(&student1, &student2);
	printf("%d\n", valoare_comparare); 
	valoare_comparare = CompIsto(&student1, &student2);
	printf("%d\n", valoare_comparare);
	valoare_comparare = CompMate(&student1, &student2);
	printf("%d\n", valoare_comparare);
	int avg1=student1.Average();
	int avg2=student2.Average();
	printf("%d\n", avg1);
	printf("%d\n", avg2);
	valoare_comparare = CompAverage(&student1, &student2);
	printf("%d\n", valoare_comparare);

}