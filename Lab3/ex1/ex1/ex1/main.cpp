#include "Math.h"
#include <stdlib.h>
#include <stdio.h>
char *sir;
int main() {
	Math ex1;

	int k=ex1.Add(3,2);
	printf("%d\n", k);

	k = ex1.Add(3, 2, 9);
	printf("%d\n", k);

	k = ex1.Add(3.2, 5.7);
	printf("%d\n", k);

	k = ex1.Add(3.2, 3.3, 6.5);
	printf("%d\n", k); 

	k = ex1.Mul(3, 2);
	printf("%d\n", k);

	k = ex1.Mul(3, 2, 3);
	printf("%d\n", k);

	k = ex1.Mul(3.2, 2.3);
	printf("%d\n", k);

	k = ex1.Mul(3.9, 2.4, 5.5);
	printf("%d\n", k);

	k = ex1.Add(5, 2, 1, 2, 4, 6);
	printf("%d\n", k);

	sir = ex1.Add("Ana", "Mere");
	printf("%s\n", sir);
	system("pause");
	return 0;
}