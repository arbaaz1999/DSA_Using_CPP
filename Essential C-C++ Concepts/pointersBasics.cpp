#include<iostream>
using namespace std;

/* 
Pointers Basics
Pointers are address variables, these are meant for storing addresses of data
Pointers are used for :
1. Accessing heap memory,
2. External resources,
3. Parameter passing,
4. Storing addresses of data.
*/

// example
int main () {
    int *q; // declaring another pointer
    q = new int[5]; // allocating the memory in heap for the array of size 5
    int a = 10; // declaring and initializing a normal variable.
    int *p; // declaration of a pointer.
    p=&a; // storing address of variable a in the declared pointer.
    cout<<"Address of a is "<<p<<endl;
    cout<<"Dereferencing of a pointer is "<<*p<<endl; //*p is called as dereferencing.
    cout<<"Value of a is "<<a<<endl;
    q=NULL; // assigning NULL to the pointer q
    delete []q; // deleting the memory from heap which was allocated earlier
    cout<<q<<endl;
    return 0;
}