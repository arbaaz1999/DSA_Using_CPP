#include <iostream>
using namespace std;

void findDuplicates(int nums[], int n)
{
    int lastDuplicate = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == nums[i + 1] && lastDuplicate != nums[i])
        {
            cout << nums[i] << " ";
            lastDuplicate = nums[i];
        }
    }
    cout << endl;
};

void countDuplicates(int nums[], int n)
{
    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            j = i + 1;
            while (nums[i] == nums[j])
                j++;
            cout << nums[i] << " appears " << j - i << " times." << endl;
            i = j - 1;
        }
    }
};

int main()
{
    int A[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20, 22, 23, 23, 23, 23, 26, 28};
    int size = sizeof(A) / sizeof(A[0]);
    findDuplicates(A, size);
    countDuplicates(A, size);
    return 0;
}