#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t)
{
    unordered_map<char, int> count;

    // increasing the frequecies of characters of s in count map;
    for (char x : s)
        count[x]++;

    // decreasing the frequencies of characters of t in count map
    for (char x : t)
        count[x]--;

    for (auto x : count)
    {
        if (x.second != 0)
            return false;
    }
    return true;
}

int main()
{
    string s1 = "anagram", s2 = "nagaram";
    int isAnagrams = isAnagram(s1, s2);
    isAnagrams == 1 ? cout << "true" : cout << "false" << endl;
    return 0;
}