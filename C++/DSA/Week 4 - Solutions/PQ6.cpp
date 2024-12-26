// EKO SPOJ

#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool isPossibleSolution(vector<int> trees, int m, int mid)
{
    int woodCollected = 0;
    for (int i = 0; i < trees.size(); i++)
    {
        if (trees[i] > mid)
            woodCollected += trees[i] - mid;
    }
    return woodCollected >= m;
}

int maxSawBlade(vector<int> trees, int m)
{
    int start, end, ans = -1;
    end = *max_element(trees.begin(), trees.end());

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossibleSolution(trees, m, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
signed main()
{
    int n, m;
    cin >> n >> m;
    vector<int> trees;
    while (n--)
    {
        int height;
        cin >> height;
        trees.push_back(height);
    }

    cout << maxSawBlade(trees, m) << endl;

    return 0;
}