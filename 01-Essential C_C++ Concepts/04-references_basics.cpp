#include <iostream>
using namespace std;

/*
=> References :
=> Reference is another name given to a variable, they do not create new memory.
=> Use of References :
=> It is used in parameter passing.
*/

int main()
{
    int a = 10; // normal variable

    int &x = a;
    /*
   Declaring a reference;
   An 'Ampersand(&)' is used before the identifier to declare the reference and the variable 'a' is assign to the reference 'x';
   Now, the variable a can also be accessed by the name 'x'
    */

    cout << a << endl;                   // output: 10;
    cout << x << endl;                   // output : 10;
    cout << &x << " and " << &a << endl; // address of x is 0xd5a15ffd84 also address of a is 0xd5a15ffd84;
    return 0;
}