// Leetcode -> Longest palindromic substring

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s, int start, int end)
{
    while (start < end)
    {
        if (s[start] != s[end])
            return false;
        start++;
        end--;
    }
    return true;
}
string longestPalindrome(string s)
{
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i; j < s.size(); j++)
        {
            if (isPalindrome(s, i, j))
            {
                // s.substr(start,len)
                string t = s.substr(i, j - i + 1);
                // since we have to find largest
                ans = t.size() > ans.size() ? t : ans;
            }
        }
    }
    return ans;
}

int main() {}