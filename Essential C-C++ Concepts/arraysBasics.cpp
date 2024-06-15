#include<iostream>
using namespace std;

// Arrays Basic
// Collections of similar datasets in contigous manner.

int main () {
    int A[5] = {2,4,6,8,10}; //declaration and initialization of an array

    //accessing elements of an array using for-each loop
    for(int x:A)
        cout<<x<<" ";
    return 0;
}