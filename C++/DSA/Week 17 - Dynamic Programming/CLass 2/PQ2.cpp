// House robber
#include <bits/stdc++.h>
using namespace std;

// n represents the index of current house
int solveUsingRec(vector<int> nums, int n)
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return nums[n];
    }

    // include
    int include = solveUsingRec(nums, n - 2) + nums[n];
    // exclude
    int exclude = solveUsingRec(nums, n - 1);

    return max(include, exclude);
}

int solveUsingMem(vector<int> &nums, int n, vector<int> dp)
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return nums[n];
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }

    // include
    int include = solveUsingMem(nums, n - 2, dp) + nums[n];
    // exclude
    int exclude = solveUsingMem(nums, n - 1, dp);
    dp[n] = max(include, exclude);
    return dp[n];
}

int solveUsingTab(vector<int> &nums, int n)
{
    vector<int> dp(n + 1, -1);
    dp[0] = nums[0];

    for (int i = 1; i <= n; i++)
    {
        int temp = 0;
        if (i - 2 >= 0)
            temp = dp[i - 2];

        int include = temp + nums[i];

        int exclude = dp[i - 1];
        dp[i] = max(include, exclude);
    }
    return dp[n];
}
int spaceOptimisedSolution(vector<int> &nums, int n)
{
    int prev2 = 0;
    int prev1 = nums[0];

    int curr = 0;

    for (int i = 1; i <= n; i++)
    {
        int temp = 0;
        if (i - 2 >= 0)
            temp = prev2;

        int include = temp + nums[i];
        int exclude = prev1;
        curr = max(include, exclude);
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}

int rob(vector<int> &nums)
{

    int n = nums.size() - 1;
    // ✅ Recursion
    return solveUsingRec(nums, n);

    // ✅ Memoisation
    vector<int> dp(n + 1, -1);
    return solveUsingMem(nums, n, dp);

    // ✅ Tabulation
    vector<int> dp(n + 1, -1);
    return solveUsingTab(nums, n);
}

int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);

    int ans = rob(nums);
    cout << "Ans is : " << ans;
    return 0;
}