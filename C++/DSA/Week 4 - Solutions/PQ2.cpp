// Leetcode 658 -> Find K Closest Elements

#include <bits/stdc++.h>
using namespace std;

// 2 pointer method
vector<int> twoPtrMethod(vector<int> a, int k, int x)
{
    int l = 0, h = a.size() - 1;
    while (h - l >= k)
    {
        if (x - a[l] > a[h] - x)
            l++;
        else
            h--;
    }
    return vector<int>(a.begin() + l, a.begin() + h + 1);
}

// Binary Search method
vector<int> bsMethod(vector<int> a, int k, int x)
{
    int h = *(lower_bound(a.begin(), a.end(), x));
    int l = h - 1;
    while (k--)
    {
        if (l < 0)
            h++;
        else if (h >= a.size())
            l--;
        else if (x - a[l] > a[h] - x)
            h++;
        else
            l--;
    }
    return vector<int>(a.begin() + l + 1, a.begin() + h);
}

// My solution -> Using vector and for loop
vector<int> usingSTL(vector<int> &a, int k, int x)
{
    vector<pair<int, int>> v;
    for (int i = 0; i < a.size(); i++)
    {
        int diff = abs(a[i] - x);
        v.push_back({diff, a[i]});
    }
    sort(v.begin(), v.end());
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        ans.push_back(v[i].second);
    }
    sort(ans.begin(), ans.end());
    return ans;
}

vector<int> findClosestElements(vector<int> &a, int k, int x)
{
    return twoPtrMethod(a, k, x);
}

int main() {}