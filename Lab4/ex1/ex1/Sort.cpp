#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>
#include <cstring>
#include <algorithm>

Sort::Sort(int numar_elemente, int min_elem, int max_elem) {
	this->vector = (int*)malloc(numar_elemente * sizeof(int));
	this->numberOfElements = numar_elemente;
	time_t t;
	srand((unsigned)time(&t));
	for (int i = 0; i < numar_elemente; i++) {
		this->vector[i] = min_elem + rand() % (max_elem - min_elem + 1);
	}
}

Sort::Sort(int* vector, int numar_elemente) {
	this->vector = (int*)malloc(numar_elemente * sizeof(int));
	this->numberOfElements = numar_elemente;
	for (int i = 0; i < numar_elemente; i++) {
		this->vector[i] = vector[i];
	}
}

Sort::Sort(int count, ...) {
	this->vector = (int*)malloc(count * sizeof(int));
	this->numberOfElements = count;
	va_list vl;
	va_start(vl, count);
	for (int i = 0; i < count; i++)
	{
		this->vector[i] = va_arg(vl, int);
	}
	va_end(vl);
}

Sort::Sort(char* c) {
	int size = strlen(c);
	this->vector = (int*)malloc(0 * sizeof(int));
	this->numberOfElements = 0;
	char* p;
	p = strtok(c, ",");
	int k = 0;
	while (p)
	{
		this->numberOfElements++;
		this->vector = (int*)realloc(this->vector, numberOfElements * sizeof(int));
		this->vector[k] = atoi(p);
		k++;
		p = strtok(NULL, ",");
	}
}

Sort::Sort() :vector(new int[6]{ 1,2,3,4,5,6 }) {
	this->numberOfElements = 6;
}

void Sort::BubbleSort(bool ascendent) {
	int i, j;
	int n = this->numberOfElements;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
		{
			if (ascendent == true && this->vector[j] > this->vector[j + 1])
				std::swap(this->vector[j], this->vector[j + 1]);
			else
				if (ascendent == false && this->vector[j] < this->vector[j + 1])
					std::swap(this->vector[j], this->vector[j + 1]);
		}

}

void Sort::InsertSort(bool ascendent) {
	int i, j, key;
	int n = this->numberOfElements;
	for (i = 1; i < n; i++) {
		key = this->vector[i];
		j = i - 1;
		while (ascendent==true && j >= 0 && this->vector[j] > key) {
			this->vector[j + 1] = this->vector[j];
			j = j - 1;
		}
		while (ascendent == false && j >= 0 && this->vector[j] < key) {
			this->vector[j + 1] = this->vector[j];
			j = j - 1;
		}
		this->vector[j + 1] = key;
	}
}

int Sort::partition(int low, int high, bool ascendent)
{
	int pivot = this->vector[high];
	int aux;
	int i = low - 1;
	for (int j = low; j <= high - 1; j++)
	{
		if (ascendent == false)
		{
			if (this->vector[j] > pivot)
			{
				i++;
				aux = this->vector[i];
				this->vector[i] = this->vector[j];
				this->vector[j] = aux;
			}
		}
		else
		{
			if (this->vector[j] < pivot)
			{
				i++;
				aux = this->vector[i];
				this->vector[i] = this->vector[j];
				this->vector[j] = aux;
			}
		}
	}
	aux = this->vector[i + 1];
	this->vector[i + 1] = this->vector[high];
	this->vector[high] = aux;
	return(i + 1);
}

void Sort::quicksort(int low, int high, bool ascendent)
{
	if (low < high)
	{
		int p = partition(low, high, ascendent);
		quicksort(low, p - 1, ascendent);
		quicksort(p + 1, high, ascendent);
	}
}

void Sort::QuickSort(bool ascendent) {
	quicksort(0, this->numberOfElements - 1, ascendent);
}

int Sort::GetElementFromIndex(int index) {
	return this->vector[index];
}

int Sort::GetElementsCount() {
	return this->numberOfElements;
}

void Sort::Print() {
	int n = this->numberOfElements;
	for (int i = 0; i < n; i++)
	{
		int e = this->vector[i];
		printf("%d ", e);
	}
	printf("\n");
}
