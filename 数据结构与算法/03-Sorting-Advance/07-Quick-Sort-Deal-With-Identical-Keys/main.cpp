#include <iostream>
#include <algorithm>
#include <ctime>
#include "SortTestHelper.h"
#include "MergeSort.h"
#include "InsertionSort.h"
using namespace std;
template <typename T>
int _partition2(T arr[], int l, int r)
{
    swap(arr[l], arr[rand() % (r - l + 1) + l]);
    T v = arr[l];
    int i = l + 1, j = r;
    while (true)
    {
        while (i <= r && arr[i] < v)
            i++;
        while (j >= l + 1 && arr[j] > v)
            j--;
        if (i > j)
            break;
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    swap(arr[i], arr[j]);
    return j;
}

template <typename T>
void _quickSort2(T arr[], int l, int r)
{

    if (l >= r)
        return;

    int p = _partition2(arr, l, r);
    _quickSort2(arr, l, p - 1);
    _quickSort2(arr, p + 1, r);
}

template <typename T>
void quickSort2(T arr[], int n)
{

    srand(time(NULL));
    _quickSort2(arr, 0, n - 1);
}

int main()
{
    int a[3] = {3, 3, 1};
    quickSort2(a, 3);
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
