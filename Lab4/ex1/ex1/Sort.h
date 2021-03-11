#pragma once
class Sort

{
    int* vector;
    int numberOfElements;
    // add data members

public:

    // add constuctors
    Sort(int numar_elemente, int min_element, int max_element);
    Sort(int* vector, int numar_elemente);
    Sort();
    Sort(int count, ...);
    Sort(char* c);

    void InsertSort(bool ascendent = false);

    void QuickSort(int low,int high, bool ascendent = false);

    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

};