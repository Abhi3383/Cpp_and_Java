#include <bits/stdc++.h>
using namespace std;

void solve(int n, int left, int right, vector<string> &ans, string temp)
{
    if (left + right == 2 * n)
    {
        ans.push_back(temp);
        return;
    }

    if (left < n)
    {
        temp.push_back('(');
        solve(n, left + 1, right, ans, temp);
        temp.pop_back();
    }
    if (right < left)
    {
        temp.push_back(')');
        solve(n, left, right + 1, ans, temp);
        temp.pop_back();
    }
}

int main()
{
    int n = 3;
    vector<string> ans;
    int used_open = 0;
    int used_close = 0;
    int rem_open = n;
    int rem_close = n;
    string output = "";
    solve(n, used_open, used_close, ans, output);
    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}