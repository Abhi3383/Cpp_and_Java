// Leetcode -> reverse vowels of a string

#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch)
{
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

string reverseVowels(string s)
{
    int l = 0, h = s.size() - 1;

    while (l <= h)
    {
        if (isVowel(s[l]) && isVowel(s[h]))
        {
            swap(s[l], s[h]);
            l++;
            h--;
        }
        else if (isVowel(s[l]))
        {
            h--;
        }
        else
        {
            l++;
        }
    }
    return s;
}

int main() {}