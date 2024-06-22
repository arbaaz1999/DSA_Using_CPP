#include <iostream>
using namespace std;

/*
1. Static Array :
-> The memory allocation occurs during compile time.
-> The array size is fixed and cannot be changed.
-> The location is in stack memory.
-> The array can be initialized but not erased.

2. Dynamic Array :
-> The memory allocation occurs during run time.
-> The array size is not fixed and can be changed.
-> The location is in heap memory.
-> This array cannot be read or written after destroying.
*/

int main()
{
    int A[5] = {2, 4, 6, 8, 10}; // static integer array.
    int *B;
    B = new int[5]; // dynamic integer array.
    for (int i = 0; i < 5; i++)
    {
        B[i] = A[i];
    }

    cout << "Elements of B are : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << B[i] << " ";
    }

    return 0;
}