#include <iostream>
using namespace std;

void merge(int nums1[], int m, int nums2[], int n)
{
    // last index of nums1
    int last = (m + n) - 1;
    // copy elements from nums2 to nums1 in sorted order
    while (m > 0 && n > 0)
    {
        if (nums1[m - 1] > nums2[n - 1])
        {
            nums1[last] = nums1[m - 1];
            m--;
        }
        else
        {
            nums1[last] = nums2[n - 1];
            n--;
        }
        last--;
    }
    // copy remaining ones from nums1
    while (n > 0)
    {
        nums1[last] = nums2[n - 1];
        n--;
        last--;
    }
}

int main()
{
    int nums1[] = {1, 2, 3, 0, 0, 0}, m = 3, nums2[] = {2, 5, 6}, n = 3;
    merge(nums1, m, nums2, n);
    cout << "Nums1 array is" << endl;
    for (int i = 0; i < m + n; i++)
    {
        cout << nums1[i] << " ";
    }

    return 0;
}