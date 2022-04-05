#include <iostream>
#include <algorithm>
#include "SortTestHelper.h"
#include "SelectionSort.h"

using namespace std;

template <typename T>
void insertionSort(T arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        T e = arr[i];
        int j;
        for (j = i; j > 0 && arr[j] > e; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[j] = e;
    }

    return;
}

int main()
{

    int n = 20000;
    int *arr1 = SortTestHelper::generateNearlyOrderedArray(n, 100);
    int *arr2 = SortTestHelper::copyIntArray(arr1, n);

    SortTestHelper::testSort("Insertion Sort", insertionSort, arr1, n);
    SortTestHelper::testSort("Selection Sort", selectionSort, arr2, n);

    delete[] arr1;
    delete[] arr2;

    cout << endl;

    return 0;
}