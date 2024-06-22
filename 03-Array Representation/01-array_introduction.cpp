#include <iostream>
using namespace std;
/*
1. Variables that store only single value are called as Scalar Variables.
2. What is Array ?
-> Array is a set of similar data elements grouped under one name. Arrays are also called as Vector variable as they holds mulple values either in one dimension or multi-dimension.
3. How to access or modify any element of an array ?
-> With the help of indices, i.e. A[1] or A[2] and so on;
*/

int main()
{
    // Different ways of Declaration and Initialization of an Array;
    int A[5];                    // This will create an array of size of 5 in memory with garbage values.
    int B[5] = {2, 4, 6, 8, 10}; // This is will create and initialize array with values {2,4,6,8,10}.
    int C[5] = {2, 4};           // This will create and initialize array with two values on first two indices i.e. {2,4,0,0,0}.
    int D[5] = {0};              // This will initialize an array with {0,0,0,0,0}.
    int E[] = {2, 4, 6, 8, 10};  // This will automatically gives the size to array according to the number of elements.

    // For traversing through all elements of an Array, `for` loop is used;
    for (int i = 0; i < 5; i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;

    // Other methods for accessing an element of an Array;
    // By Subscript;
    cout << E[2] << endl;
    cout << 2 [E] << endl;
    // By Pointer Arithmatic
    cout << *(E + 3) << endl;

    return 0;
}