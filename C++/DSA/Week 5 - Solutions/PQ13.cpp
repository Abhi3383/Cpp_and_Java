// Leetcode -> Zig zag conversion

#include <bits/stdc++.h>
using namespace std;

string convert(string s, int numRows)
{
    if (numRows == 1)
        return s;
    vector<string> zigzag(numRows);
    int i = 0, row = 0;
    bool direction = 1;
    while (true)
    {
        if (direction)
        {
            while (i < s.size() && row < numRows)
            {
                zigzag[row++].push_back(s[i++]);
            }
            row = numRows - 2; // rows-2(same thing)
        }
        else
        {
            while (i < s.size() && row >= 0)
            {
                zigzag[row--].push_back(s[i++]);
            }
            row = 1;
        }
        if (i >= s.size())
            break;
        direction = !direction;
    }

    string ans = "";
    for (int i = 0; i < zigzag.size(); i++)
    {
        ans += zigzag[i];
    }
    return ans;
}

int main() {}