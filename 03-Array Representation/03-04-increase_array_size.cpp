#include <iostream>
using namespace std;

/*
1. How to increase size of an Array ?
-> There is no direct way to increase the size of existing allocated memory rather we can allocate a new memory of increased size and assign the existing memory to the new allocated memory. Let's understand it with an example below :
*/

int main()
{
    int *p;                         // Declaring a pointer p
    p = new int[5]{2, 4, 6, 8, 10}; // Allocating memory in heap size of 5 integer

    int *q;         // Afterwards declaring another pointer q
    q = new int[7]; // Allocating memory in heap of increased size of 7 integer

    // Now copying all elements from p to q using for loop
    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }
    q[5] = 12;
    q[6] = 13;
    delete[] p; // Releasing the memory to which the pointer p was referencing
    p = q;      // Assigning the reference of the memory to p that q was pointing to.
    q = NULL;   // De-referencing the pointer q, Now the pointer p will point to the increased memory location.
    // Now if we try to access the elements of pointer p with increased size.
    for (int i = 0; i < 7; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
    // we will get the output: 2, 4, 6, 8, 10, 12, 13;

    // If we try to access the element of pointer q than,

    for (int i = 0; i < 7; i++)
    {
        cout << q[i] << " ";
    }
    cout << endl;

    // we get nothing in the output, coz q is NULL;

    return 0;
}