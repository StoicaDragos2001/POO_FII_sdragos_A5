#include "Sort.h"
#include <stdlib.h>
#include <stdio.h>

int main() {
	int v[4] = { 0, 4, 2, 5 };

	Sort s1;
	s1.Print();
	int rez=s1.GetElementFromIndex(2);
	printf("%d", rez); printf("\n");

	Sort s2(5, 2, 13);
	s2.Print();
	s2.BubbleSort();
	s2.Print();
	s2.InsertSort();
	s2.Print();

	Sort s3(v, 4);
	s3.Print();

	Sort s4(5, 1, 2, 5, 4, 3);
	s4.Print();




	printf("\n");
	system("pause");
}