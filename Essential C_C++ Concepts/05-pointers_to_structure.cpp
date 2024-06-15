#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    Rectangle *r;              // declaring a pointer of type Rectangle;
    r = new Rectangle;         // allocating the memory in heap for the struct Rectangle;
    r->length = 15;            // modifying the data member of struct Rectangle in heap using arrow (->) operator;
    cout << r->length << endl; // accessing the data member....

    return 0;
}