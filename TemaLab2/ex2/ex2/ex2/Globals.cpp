#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "Globals.h"
#include <cstring>



int CompAverage(Stats* student1, Stats* student2) {
	int avg1 = student1->Average();
	int avg2 = student2->Average();
	if (avg1 == avg2)
		return 0;
	if (avg1 > avg2)
		return 1;
	if (avg1 < avg2)
		return -1;
}

int CompMate(Stats* student1, Stats* student2) {
	int mate1 = student1->getMate();
	int mate2 = student2->getMate();
	if (mate1 == mate2)
		return 0;
	if (mate1 > mate2)
		return 1;
	if (mate1 < mate2)
		return -1;
}


int CompIsto(Stats* student1, Stats* student2) {
	int isto1 = student1->getIst();
	int isto2 = student2->getIst();
	if (isto1 == isto2)
		return 0;
	if (isto1 > isto2)
		return 1;
	if (isto1 < isto2)
		return -1;
}

int CompEng(Stats* student1, Stats* student2) {
	int eng1 = student1->getEng();
	int eng2 = student2->getEng();
	if (eng1 == eng2)
		return 0;
	if (eng1 > eng2)
		return 1;
	if (eng1 < eng2)
		return -1;
}

int CompName(Stats* student1, Stats* student2) {
	char name1[20], name2[20];
	strcpy(name1, student1->getName());
	strcpy(name2, student2->getName());
	if (strcmp(name1, name2) == 0)
		return 0;
	if (strcmp(name1, name2) > 0)
		return 1;
	if (strcmp(name1, name2) < 0)
		return -1;
}
