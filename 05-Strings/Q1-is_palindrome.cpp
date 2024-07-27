#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int i = 0, j = s.size() - 1;
    while (i <= j)
    {
        if (!isalnum(s[i]))
        {
            i++;
            continue;
        };
        if (!isalnum(s[j]))
        {
            j--;
            continue;
        };
        if (tolower(s[i]) != tolower(s[j]))
        {
            return false;
        }
        else
        {
            i++;
            j--;
        };
    }
    return true;
}

int main()
{
    string S = " ";
    bool isPalindromes = isPalindrome(S);
    isPalindromes == 1 ? cout << "Given string is palindrome" << endl : cout << "Given string is NOT a palindrome" << endl;
    // cout << S << endl;
    return 0;
};