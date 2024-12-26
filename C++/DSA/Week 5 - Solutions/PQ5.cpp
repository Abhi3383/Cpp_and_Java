// Leetcode -> Isomorphic strings

#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t)
{
    // mapping of each char of language 's' to language 't'
    char hash[256] = {0};
    // stores if t[i] char already mapped with s[i]
    bool istCharsMapped[256] = {0};
    if (t.size() != s.size())
        return false;
    for (int i = 0; i < s.size(); i++)
    {
        if (hash[s[i]] == 0 && istCharsMapped[t[i]] == 0)
        {
            hash[s[i]] = t[i];
            istCharsMapped[t[i]] = true;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (hash[s[i]] != t[i])
            return false;
    }
    return true;
}

int main() {}