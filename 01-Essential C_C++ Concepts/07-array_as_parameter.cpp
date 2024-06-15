#include <iostream>
using namespace std;

void func(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
};

int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    func(A, 5);
    for (int x : A)
        cout << x << " ";

    return 0;
};

/*
=> Note: Whenever an array is passed to a function, it always passed by reference by default i.e. the formal parameter for an array is pointer by default.
*/