#include <iostream>
using namespace std;

int main()
{
    // There are different methods of Declaring and Initializing a 2D Array :
    // Method 1:
    int A[3][4] = {{1, 3, 5, 7}, {2, 4, 6, 8}, {9, 7, 5, 3}};
    cout << "Elements of A by method 1 is :" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    };

    // Method 2: By declaring an array of integer pointer
    int *B[3];
    int count = 1;

    for (int i = 0; i < 3; i++)
    {
        B[i] = new int[4];
        for (int j = 0; j < 4; j++)
        {
            B[i][j] = count;
            count++;
        }
    };
    cout << "Elements of B by method 2 is : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    };

    // Method 3: By using double pointer
    count = 1;
    int **C;
    C = new int *[3];
    for (int i = 0; i < 3; i++)
    {
        C[i] = new int[4];
        for (int j = 0; j < 4; j++)
        {
            C[i][j] = count;
            count++;
        }
    };
    cout << "Elements of C by double pointer is : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
};