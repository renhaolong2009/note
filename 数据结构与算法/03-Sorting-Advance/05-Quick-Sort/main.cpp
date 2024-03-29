#include <iostream>
#include <algorithm>
#include "SortTestHelper.h"
#include "MergeSort.h"
using namespace std;
template <typename T>
int __partition(T arr[], int l, int r)
{
    T v = arr[l];

    int j = l;
    for (int i = l + 1; i <= r; i++)
    {
        if (arr[i] < v)
        {
            swap(arr[j + 1], arr[i]);
            j++;
        }
    }

    swap(arr[l], arr[j]);

    return j;
}

template <typename T>
void __quickSort(T arr[], int l, int r)
{
    if (l >= r)
        return;

    int p = __partition(arr, l, r);
    __quickSort(arr, l, p - 1);
    __quickSort(arr, p + 1, r);
}

template <typename T>
void quickSort(T arr[], int n)
{
    __quickSort(arr, 0, n - 1);
}
int main()
{
    int a[3] = {3, 2, 1};
    quickSort(a, 3);

    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}