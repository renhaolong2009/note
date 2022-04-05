#include <iostream>
#include "SortTestHelper.h"
#include "SelectionSort.h"
using namespace std;

template <typename T>
void insertionSort(T arr[], int n)
{
    //第一个元素已经是一个有序的数组了
    for (int i = 1; i < n; i++)
    {
        //寻找元素arr[i]合适的插入位置
        for (int j = i; j > 0 && arr[j] < arr[j - 1]; j--)
        {
            swap(arr[j], arr[j - 1]);
        }
    }
}
int main()
{
    int n = 20000;

    cout << "Test for random array, size = " << n << ", random range [0, " << n << "]" << endl;
    int *arr1 = SortTestHelper::generateRandomArray(n, 0, n);
    int *arr2 = SortTestHelper::copyIntArray(arr1, n);

    SortTestHelper::testSort("Insertion Sort", insertionSort, arr1, n);
    SortTestHelper::testSort("Selection Sort", selectionSort, arr2, n);

    delete[] arr1;
    delete[] arr2;

    cout << endl;
    return 0;
}