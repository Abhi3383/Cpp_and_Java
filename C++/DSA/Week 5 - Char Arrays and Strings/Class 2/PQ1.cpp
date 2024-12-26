#include <bits/stdc++.h>
using namespace std;

// Leetcode - 1047. Remove All Adjacent Duplicates In String

string removeDuplicates(string s)
{
    string ans = "";
    int i = 0;
    while (i < s.length())
    {
        if ((ans.length() > 0) && ans[ans.length() - 1] == s[i])
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(s[i]);
        }
        i++;
    }
    return ans;
}

int main()
{
    char arr[100] = "abbacad";
    cout << removeDuplicates(arr);

    return 0;
}