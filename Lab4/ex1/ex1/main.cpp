#include "Sort.h"
#include <stdlib.h>
#include <stdio.h>

int main() {


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




	printf("\n");
	system("pause");
}