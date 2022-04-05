#ifndef INC_03_SELECTION_SORT_GENERATE_TEST_CASES_SORTTESTHELPER_H
#define INC_03_SELECTION_SORT_GENERATE_TEST_CASES_SORTTESTHELPER_H

#include <iostream>
#include <ctime>
#include <cassert>

using namespace std;

namespace SortTestHelper
{

    int *generateRandomArray(int n, int rangeL, int rangeR)
    {

        assert(rangeL <= rangeR);
        //指向int型变量的指针
        int *arr = new int[n];

        srand(time(NULL));
        for (int i = 0; i < n; i++)
            arr[i] = rand() % (rangeR - rangeL + 1) + rangeL; //规定范围
        return arr;
    }

    template <typename T>
    void printArray(T arr[], int n)
    {

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;

        return;
    }

};
#endif // INC_03_SELECTION_SORT_GENERATE_TEST_CASES_SORTTESTHELPER_H