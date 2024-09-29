#include <bits/stdc++.h>
using namespace std;

/*
Problem: To find the duplicates in a string using bitwise operator;
*/

int main()
{
    string s = "finding";
    int n = sizeof(s) / sizeof(s[0]);
    long int h = 0, a = 0;
    for (int i = 0; i < n; i++)
    {
        a = 1;
        a = a << (s[i] - 97);
        if ((a & h) > 0)
            cout << s[i] << " ";
        else
            h = h | a;
    }

    return 0;
}