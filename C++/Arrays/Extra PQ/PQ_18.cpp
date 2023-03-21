// check if we can partition the array into 2 sub-arrays(part of the array)
// with equal sum. More formally, check that the prefix sum of a part of
// the array is equal to the suffix sum of the rest of the array.

/*
 _____________________________
|__|__|__|__|__|__|__|__|__|__|

--------------- ---------------
      ^               ^
      |               |
     Sum 1          Sum 2
    Prefix          Suffix

    To check if sum 1 = sum 2

*/

#include <bits/stdc++.h>
using namespace std;

bool checkPrefixSum(vector<int> &v)
{
    int total_Sum = 0;
    for (size_t i = 0; i < v.size(); i++)
    {
        total_Sum += v[i];
    }

    int prefix_Sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        prefix_Sum += v[i];
        int suffix_sum = total_Sum - prefix_Sum;

        if (suffix_sum == prefix_Sum)
        {
            return true;
        }
    }
    return false;
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

    cout << checkPrefixSum(v) << endl;

    return 0;
}