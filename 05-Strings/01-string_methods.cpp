#include <bits/stdc++.h>
using namespace std;

void toLowerCase(string &S)
{
    for (int i = 0; S[i] != '\0'; i++)
    {
        if (S[i] >= 65 && S[i] <= 90)
            S[i] = S[i] + 32;
    };
};

void toUpperCase(string &S)
{
    for (int i = 0; S[i] != '\0'; i++)
    {
        if (S[i] >= 97 && S[i] <= 122)
            S[i] = S[i] - 32;
    };
};

void countVowelsAndConsonents(string &s)
{
    int vcount = 0, ccount = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            vcount++;
        else if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
            ccount++;
    }
    cout << "No. of vowels are : " << vcount << endl
         << "No. of Consonents are : " << ccount << endl;
}

void countWords(string &s)
{
    vector<string> words;
    string temp;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != ' ')
            temp += s[i];
        else
            i++;
        words.push_back(temp);
        temp = "";
    };
    int count = 0;
    for (int j = 0; j < words.size(); j++)
    {
        if (words[j].size() != 0)
            count++;
    };
    cout << count << endl;
    cout << "No. of words are : " << words[count] << endl;
}

void reverse(string &s)
{
    for (int i = 0, j = s.length() - 1; i < j; i++, j--)
    {
        char t = s[i];
        s[i] = s[j];
        s[j] = t;
    }
}

int main()
{
    string S = " ";
    countVowelsAndConsonents(S);
    countWords(S);
    reverse(S);
    cout << S << endl;
    return 0;
};