#include <iostream>
using namespace std;

// method 1: Naive approch;
int find_single_missing(int A[], int n)
{
    int low = A[0], diff = low - 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] - i != diff)
            return i + diff;
    }

    return -1;
};

// method 2: simple and efficient approch;
// this method is only applicable for the sequential array whose lowest element is 0 and the largest is N;
int find_missing(int A[], int N)
{
    int Sn = (N * (N + 1)) / 2;
    int SA = 0;
    for (int i = 0; i < N; i++)
        SA += A[i];

    if (Sn - SA > 0)
        return Sn - SA;
    else
        return -1;
}

int main()
{
    int A[] = {7, 8, 9, 10, 12, 13, 14};
    int n = sizeof(A) / sizeof(A[0]);
    cout << "Missing Element is " << find_single_missing(A, n) << endl;
    return 0;
}