#include <iostream>
using namespace std;

int main()
{
    int arr[5];                      // declared and array of size 5
    int arr1[5] = {2, 4, 6, 8, 10};  // initialized an array of size 5 with 5 elements in it
    int arr2[] = {2, 3, 4, 5, 6, 7}; // initialized and array without specifying size of it
    int arr3[5] = {2, 4};            // initialized an array of size 5 but with only 2 elements, output will be : - {2, 4, 0, 0, 0}
    int arr4[5] = {0};               // declared an array of size 5 and initialized it with 0 e.g. {0, 0, 0, 0, 0}
    /*
    Now will see how to declare an array
    in heap by using pointer
    */
    // step 1: declare a pointer
    int *p;
    /*
    initialized the above pointer with 'new' keyword and datatype and specify size in [] square brackets,
    this is will create memory for an array of 5 interger in heap memory
    we can also initialized it with values, not more than the length specified
    */
    p = new int[5]{5, 10, 15, 20, 25};
    int i;
    for (i = 0; i < 5; i++)
    {
        // accessing the array from heap memory, which we have declared and initialized earlier
        cout << p[i] << endl;
    }

    /*
    de-allocating or freeing up the space of heap memory after it used
    and assigning NULL to the pointer *p
    */
    delete[] p;
    p = NULL;

    cout << p << endl; // getting 0, if trying to access the pointer p
    return 0;
}
