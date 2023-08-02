#include <iostream>
using namespace std;

int main()
{
    int *p, *q;                     // declaring two pointers p and q
    p = new int[5]{2, 4, 6, 8, 10}; // creating memory of size 5 in heap and p is pointing to that memory

    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl; // accessing the data of pointer p (to check)
    }
    q = new int[10]; // creating a new memory of size 10 in heap and q is pointing to that memory

    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];          // copying all data from pointer p to q
        cout << q[i] << endl; // than accessing the data of q (to check)
    }

    delete[] p; // delete the memory of pointer p from heap memory to prevent memory leak
    p = q;      // assigning the memory of q to p, now p will point the memory of size 10 which was created by pointer q
    q = NULL;   // assigning q equals NULL, now q is not pointing to any memory location as it is NULL
    delete[] q;

    cout << "Pointer P is " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << p[i] << " and location is " << &p[i] << endl;
    }

    /*
    Now only the p is pointing to that memory of size 10
    which was created by pointer q
    */

    return 0;
}