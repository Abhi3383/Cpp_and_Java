// Minimum number of elements to reach target sum

#include <bits/stdc++.h>
using namespace std;

int targetSum(vector<int> &arr, int target)
{
    if (target == 0)
    {
        return 0;
    }
    if (target < 0)
    {
        return INT_MAX;
    }

    int mini = INT_MAX;

    for (int i = 0; i < arr.size(); i++)
    {
        int ans = targetSum(arr, target - arr[i]);
        if (ans != INT_MAX)
            mini = min(mini, ans + 1);
    }
    return mini;
}

int main()
{
    vector<int> arr{1, 2, 3};
    int target = 5;
    int ans = targetSum(arr, target);
    cout << "ans is:" << ans << endl;

    return 0;
}