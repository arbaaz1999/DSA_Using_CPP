#include <iostream>
using namespace std;

// method 1: Easy and effecient approach:
int find_multiple_missings(int A[], int N)
{
    int crnt = 0;
    for (int i = A[0]; i <= A[N - 1]; i++)
    {
        if (A[crnt] == i)
            crnt++;
        else
            cout << i << " ";
    }

    return -1;
};

// method 2: naive approach:
int find_missings(int A[], int N)
{
    int diff = A[0] - 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] - i != diff)
        {
            while (diff < A[i] - i)
            {
                cout << diff + i << ' ';
                diff++;
            }
        }
    }

    return -1;
};

// method 3: finding multiple missing elements in an unsorted array;
int find_missings_3(int A[], int N)
{
    int max = A[0];
    for (int i = 0; i < N; i++)
    {
        if (A[i] > max)
            max = A[i];
    };
    int *H = new int[max]{0};
    for (int i = 0; i < N; i++)
        H[A[i]]++;
    for (int i = 1; i <= max; i++)
    {
        if (H[i] == 0)
            cout << i << " ";
    };

    return -1;
};

int main()
{
    int A[] = {3, 7, 4, 9, 12, 6, 1, 11, 2, 10};
    int size = sizeof(A) / sizeof(A[0]);
    find_missings_3(A, size);
    return 0;
};