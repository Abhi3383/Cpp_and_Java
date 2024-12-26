// Leetcode 532 -> K-diff Pairs in an Array

#include <bits/stdc++.h>
using namespace std;

// My Solution - approach with set and for loop
int findPairs1(vector<int> &v, int k)
{
    set<pair<int, int>> p;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (abs(v[i] - v[j]) == k)
            {
                if (v[i] < v[j])
                {
                    p.insert({v[i], v[j]});
                }
                else
                {
                    p.insert({v[j], v[i]});
                }
            }
        }
    }
    return p.size();
}

// 2 pointer approach with set and while loop
int findPairs2(vector<int> &v, int k)
{
    sort(v.begin(), v.end());
    set<pair<int, int>> ans;
    int i = 0;
    int j = 1;
    int cnt = 0;
    while (j < v.size())
    {
        int diff = abs(v[i] - v[j]);
        if (diff == k)
        {
            ans.insert({v[i], v[j]});
            i++, j++;
        }
        else if (diff > k)
        {
            i++;
        }
        else
        {
            j++;
        }
        if (i == j)
            j++;
    }
    return ans.size();
}


// Using bs and set
int bs(vector<int> &v, int s, int x)
{
    int e = v.size() - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (v[mid] == x)
            return mid;
        else if (x > v[mid])
            s = mid + 1;
        else
            e = mid - 1;
    }
    return -1;
}
int findPairs(vector<int> &v, int k)
{
    set<pair<int, int>> ans;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        if (bs(v, i + 1, v[i] + k) != -1)
            ans.insert({v[i], v[i] + k});
    }
    return ans.size();
}

int main() {}