#include <iostream>
using namespace std;

/*
The below method is High Level Programming in C language.
*/

struct Rectangle
{
    int length;
    int breadth;
};

void initialize(Rectangle *r, int l, int b)
{
    r->breadth = b;
    r->length = l;
}

int area(Rectangle r)
{
    return r.length * r.breadth;
}

void changeLength(Rectangle *r, int l)
{
    r->length = l;
}

int main()
{
    Rectangle r;
    initialize(&r, 15, 10); // passed parameters by address as well as value
    cout << r.length << " " << r.breadth << endl;
    int a = area(r); // passed parameters by value
    cout << "Area is " << a << endl;
    changeLength(&r, 20); // passed parameters by address as well as value
    cout << "Modified length is " << r.length << endl;

    return 0;
}