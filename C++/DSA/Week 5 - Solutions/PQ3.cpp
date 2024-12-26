// Longest Common prefix

#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    string ans;
    int i = 0;
    char ch = 0;
    bool flag = false;
    while (true)
    {
        char ch = 0;
        for (auto str : strs)
        {
            if (i >= str.size()) // out of bound
            {
                flag = true;
                break;
            }
            if (ch == 0)
                ch = str[i];
            else if (str[i] != ch)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            break;
        ans.push_back(ch);
        i++;
    }
    return ans;
}

int main() {}
