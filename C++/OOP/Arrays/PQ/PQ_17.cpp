// Given an integers array 'a', return the prefix sum/running sum
// in the same array without creating a new array.

#include <bits/stdc++.h>
using namespace std;

void runningSum(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        v[i] = v[i] + v[i - 1];
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    int n, ele;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }

    runningSum(v);

    return 0;
}