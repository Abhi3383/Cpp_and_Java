// Given an integer array "a" sorted in non-decreasing order,
// return an array of the squares of each number sorted in
// non- decreasing order.

// abs(-10) = 10 ->sort of like mod |-10| = 10

#include <bits/stdc++.h>
using namespace std;

void sortedSquareArray(vector<int> &v)
{
    vector<int> ans;
    int left_ptr = 0;
    int right_ptr = v.size() - 1;
    int k = v.size() - 1;

    while (left_ptr <= right_ptr && k >= 0)
    {
        if (abs(v[left_ptr]) < abs(v[right_ptr]))
        {
            ans.push_back(v[right_ptr] * v[right_ptr]);
            right_ptr--;
            k--;
        }
        else
        {
            ans.push_back(v[left_ptr] * v[left_ptr]);
            left_ptr++;
            k--;
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    int ele;

    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }

    sortedSquareArray(v);

    return 0;
}