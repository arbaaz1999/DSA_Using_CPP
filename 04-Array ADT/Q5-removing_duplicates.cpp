#include <iostream>
using namespace std;

int removeDuplicates1(int nums[], int n)
{
    int j = 1;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] != nums[i - 1])
        {
            nums[j] = nums[i];
            j++;
        }
    }

    return j;
}

int removeDuplicates2(int nums[], int n)
{
    int k = 1;
    for (int i = 1; i < n; i++)
    {
        if (k == 1 || nums[i] != nums[k - 2])
            nums[k++] = nums[i];
    }

    return k;
}

int main()
{
    int A[] = {0, 0, 1, 1, 1, 1, 2, 3, 3, 4};
    int size = sizeof(A) / sizeof(A[0]);
    int k = removeDuplicates2(A, size);
    for (int i = 0; i < k; i++)
        cout << A[i] << " ";
    return 0;
}