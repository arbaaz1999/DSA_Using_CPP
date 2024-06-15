#include <iostream>
using namespace std;

/*
=> Passing parameter by values :
=> When changes done to formal parameter wil not reflect to actual parameter.
*/

void swap(int *a, int *b) // here 'a' and 'b' are formal parameters.
// only pointers can store the addresses, so we have make the formal parameters as pointers which will point to addresses of actual parameters
// for accepting parameters by references change '*a' and '*b' to '&a' and '&b' respectively
{
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
};

int main()
{
    int x = 10, y = 20;
    swap(&x, &y); // here 'x' and 'y' are actual parameters
    // passing addresses of the variables that needs to be changed.
    // for passing parameters by references, change '&x' and '&y' to 'x' and 'y' respectively.
    cout << x << " " << y << endl; // x = 10 and y = 20; remains unchanged
    // x = 20 and y = 10 after passing them by address

    /*
     For making changes in actual parameter, we have to pass their address.
    */

    return 0;
}