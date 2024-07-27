#include <bits/stdc++.h>
using namespace std;

/*
Problem: Given a string s, find the length of the last word in the string.
Input: s = "Hello World"
Output: 5

Input: s = "   fly me   to   the moon  "
Output: 4

Input: s = "luffy is still joyboy"
Output: 6
*/

int lengthOfLastWord(string s)
{
    string temp;
    bool counting = false;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] != ' ')
        {
            temp += s[i];
            counting = true;
        }
        else if (counting)
        {
            break;
        }
    }
    return temp.length();
}

int main()
{
    string s = "   fly me   to   the moon  ";
    int lastWordLength = lengthOfLastWord(s);
    cout << lastWordLength << endl;
    return 0;
}