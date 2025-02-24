#include <bits/stdc++.h>
using namespace std;

// Leetcode - 680. Valid Palindrome II

bool checkPalindrome(string s, int i, int j)
{

    while (i <= j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

bool validPalindrome(string s)
{
    int i = 0;
    int j = s.length() - 1;

    while (i <= j)
    {
        if (s[i] != s[j])
        {
            // ek baar i ko remove, ek baar j ko remove
            return checkPalindrome(s, i + 1, j) || checkPalindrome(s, i, j - 1);
        }
        else
        {
            // s[i]==s[j]
            i++;
            j--;
        }
    }
    return true;
}

int main()
{
    char arr[100] = "abdbca";
    cout << validPalindrome(arr);

    return 0;
}