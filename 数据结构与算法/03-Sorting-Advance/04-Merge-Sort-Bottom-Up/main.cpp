#include <iostream>
#include "mergeSort.h"
#include "SortTestHelper.h"
using namespace std;

// 测试
int mergeNumber = 0;

template <typename T>
void mergeSortBU(T arr[], int n)
{
    for (int sz = 1; sz <= n; sz = sz + sz)
    {

        for (int i = 0; i < n; i = i + sz + sz)
        {
            __merge(arr, i, i + sz - 1, min(i + sz + sz - 1, n - 1));

            mergeNumber++;
        }
    }
}
int main()
{
    int a[6] = {123,23,329,394,23,233};
    mergeSortBU(a, 6);

    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }

    // 测试
    cout << endl
         << mergeNumber;
    return 0;
}