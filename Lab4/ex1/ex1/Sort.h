#pragma once
class Sort

{
    int* vector;
    int numberOfElements;
    int partition(int, int, bool);
    void quicksort(int, int, bool);
    // add data members

public:

    // add constuctors
    Sort(int numar_elemente, int min_element, int max_element); 
    Sort(int* vector, int numar_elemente);
    Sort(); //initialization list
    Sort(int count, ...);
    Sort(char* c);

    void InsertSort(bool ascendent = false);

    void QuickSort(bool ascendent = false);

    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

};