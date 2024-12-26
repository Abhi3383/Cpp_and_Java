// Leetcode -> Reorganize strings

#include <bits/stdc++.h>
using namespace std;

string reorganizeString(string s)
{
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    // find the most freq char
    char mostFreqChar;
    int maxFreq = INT_MIN;
    for (int i = 0; i < 26; i++)
    {
        if (hash[i] > maxFreq)
        {
            maxFreq = hash[i];
            mostFreqChar = i + 'a';
        }
    }
    int idx = 0;
    while (maxFreq > 0 && idx < s.size())
    {
        s[idx] = mostFreqChar;
        maxFreq--;
        idx += 2;
    }
    if (maxFreq != 0)
    {
        return "";
    }

    hash[mostFreqChar - 'a'] = 0;

    for (int i = 0; i < 26; i++)
    {
        while (hash[i] > 0)
        {
            idx = idx >= s.size() ? 1 : idx;
            s[idx] = i + 'a';
            idx += 2;
            hash[i]--;
        }
    }
    return s;
}

int main() {}
