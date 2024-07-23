#include <bits/stdc++.h>
using namespace std;

/*
Problem: Return the element from the given array `nums` that occurs more than `n/2` times, where n is the size of the array.
*/

// Approach 1: Boyer Moore's Voting Algorithm (The most Effecient approach with Space-Complexity of O(1) and Time-Complexity of O(n));
int getMajorityElement(vector<int> &nums)
{
    int count = 0, el;
    for (int i = 0; i < nums.size(); i++)
    {
        if (count == 0)
        {
            el = nums[i];
            count = 1;
        }
        else if (nums[i] == el)
            count++;
        else
            count--;
    }
    int count2 = 0;
    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[j] == el)
            count2++;
    };
    if (count2 > (nums.size() / 2))
        return el;

    return -1;
};

// Approach 2: By sorting;
int getMajorityElement2(vector<int> &nums)
{
    std::sort(nums.begin(), nums.end());

    return nums[nums.size() / 2];
};

// Approach 3: By using HashTable;
int getMajorityElement3(vector<int> &nums)
{
    map<int, int> hashMap;
    int res;
    for (int i = 0; i < nums.size(); i++)
    {
        if (hashMap.find(nums[i]) == hashMap.end())
            hashMap[nums[i]] = 1;
        else
            hashMap[nums[i]]++;
    }
    for (auto x : hashMap)
    {
        if (x.second > (nums.size() / 2))
            res = x.first;
    }

    return res;
};

int main()
{
    vector<int> nums{2, 2, 1, 1, 1, 2, 2};
    int majorityElem = getMajorityElement3(nums);
    cout << "Majority Element is " << majorityElem << endl;
    return 0;
}