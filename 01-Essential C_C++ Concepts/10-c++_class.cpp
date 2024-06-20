#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle() // Non-Parameterized or Default Constructor, will assign 0 to data members if no arguments are passed.
    {
        length = 0;
        breadth = 0;
    }
    Rectangle(int l, int b) // Parameterized Constructor, will assign gived parameters to the respective data members, this is called automatically when an object is created
    {
        length = l;
        breadth = b;
    }
    int area() // This is member function, also called as Facilitator, do operations on data members.
    {
        return length * breadth;
    }
    int perimeter() // Another Facilitator
    {
        return 2 * (length + breadth);
    }
    void setLength(int l) // This is called as Mutator
    {
        length = l;
    }
    void setBreadth(int b) // Another Mutator
    {
        breadth = b;
    }
    int getLength() // This is called as Accessor
    {
        return length;
    }
    int getBreadth() // Another Accessor
    {
        return breadth;
    }
    ~Rectangle() // This is called as Destructor, it is used to destruct something i.e. if you allocate dynamic memory in constructor, than you can deallocate or delete the memory here. It is also called implicitly when the main function ends and the object gets deleted.
    {
        cout << "Destructor";
    }
};

int main()
{
    Rectangle r(10, 5);
    cout << "Area is " << r.area() << endl;
    cout << "Perimeter is " << r.perimeter() << endl;
    r.setLength(15);
    r.setBreadth(12);
    cout << "New Lenght is " << r.getLength() << endl;
    cout << "New Breadth is " << r.getBreadth() << endl;

    return 0;
}