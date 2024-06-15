#include<iostream>
using namespace std;

// Structures Basics
// A structure is a collection of data members under one name, these data members may of similar type or dissimilar types.


// Defining a structure :
struct Rectangle
{
    int length;
    int breadth;
};

// Other user cases
struct Cards {
    int face;
    int shape;
    int color;
};

int main() {
    Cards deck[52]; // Declared an array of cards; which will look like : {{1,0,0}, {2,0,0} ... {3, 52, 52}}
    Rectangle r = {15,10}; // Declaration and initialization of a structure
    cout<<"Length is "<<r.length<<" and "<<"Breadth is "<<r.breadth<<endl; // Accessing data members of a structure using (.) dot operator
    
    r.length = 25; // modifying data members
    r.breadth = 20; 

    cout<<"Length is "<<r.length<<" and "<<"Breadth is "<<r.breadth<<endl; // Accessing data members of a structure using (.) dot operator
    
    
    
    return 0;
}
