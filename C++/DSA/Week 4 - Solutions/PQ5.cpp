// GFG -> Aggressive Cows

#include <bits/stdc++.h>
using namespace std;

bool isPossibleSolution(int n, int k, int mid, vector<int> &stalls)
{
    int cnt = 1;
    int pos = stalls[0];
    for (int i = 1; i < n; i++)
    {
        if (stalls[i] - pos >= mid)
        {
            cnt++;
            pos = stalls[i];
            if (cnt >= k)
                return true;
        }
    }
    return false;
}
int solve(int n, int k, vector<int> &stalls)
{

    // Write your code here
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int e = stalls[stalls.size() - 1];
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossibleSolution(n, k, mid, stalls))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{

    int n = 5, k = 3;

    vector<int> stalls{1, 2, 4, 8, 9};
    cout << solve(n, k, stalls) << endl;

    return 0;
}