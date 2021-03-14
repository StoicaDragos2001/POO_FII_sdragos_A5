#include "Sort.h"
#include <stdlib.h>
#include <stdio.h>

int main() {
	int v[4] = { 0, 4, 2, 5 };
	char c[8] = "0,4,2,5";

	Sort s1;
	s1.Print(); //initialization list
	int rez=s1.GetElementFromIndex(2);
	printf("%d", rez); printf("\n");

	printf("\n");

	Sort s2(5, 2, 13); //random
	s2.Print();
	printf("\n");
	s2.BubbleSort();
	s2.Print();
	s2.BubbleSort(true);
	s2.Print();
	printf("\n");
	s2.InsertSort();
	s2.Print();
	s2.InsertSort(true);
	s2.Print();
	printf("\n");
	s2.QuickSort();
	s2.Print(); 
	s2.QuickSort(true);
	s2.Print();
	printf("\n");

	Sort s3(v, 4); //existing vector
	int num = s3.GetElementsCount();
	s3.Print();
	printf("-----%d", num);
	printf("\n\n");

	Sort s4(5, 1, 2, 5, 4, 3); //variadic
	s4.Print();
	printf("\n");

	Sort s5(c); //string
	s5.Print();



	printf("\n");
	system("pause");
}