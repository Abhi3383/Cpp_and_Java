// Leetcode -> String compression

#include <bits/stdc++.h>
using namespace std;

int compress(vector<char> &s)
{
    int idx = 0, cnt = 1;
    char prev = s[0];

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == prev)
            cnt++;
        else
        {
            s[idx++] = prev;
            if (cnt > 1)
            {
                int start = idx;
                while (cnt)
                {
                    s[idx++] = (cnt % 10) + '0';
                    cnt /= 10;
                }
                // reverse works till end-1
                reverse(s.begin() + start, s.begin() + idx);
            }
            prev = s[i];
            cnt = 1;
        }
    }
    s[idx++] = prev;
    if (cnt > 1)
    {
        int start = idx;
        while (cnt)
        {
            s[idx++] = (cnt % 10) + '0';
            cnt /= 10;
        }
        reverse(s.begin() + start, s.begin() + idx);
    }
    return idx;
}

int main() {}