// Coin change
#include <bits/stdc++.h>
using namespace std;

int solveUsingRec(vector<int> &coins, int amount)
{

    if (amount == 0)
    {
        return 0;
    }
    if (amount < 0)
    {
        return INT_MAX;
    }

    int mini = INT_MAX;
    for (int i = 0; i < coins.size(); i++)
    {
        int ans = solveUsingRec(coins, amount - coins[i]);
        if (ans != INT_MAX)
        {
            mini = min(mini, 1 + ans);
        }
    }
    if (mini == INT_MAX)
    {
        return -1;
    }
    else
    {
        return mini;
    }
}

int solveUsingMem(vector<int> &coins, int amount, vector<int> dp)
{
    // base case
    if (amount == 0)
    {
        return 0;
    }
    if (amount < 0)
    {
        return INT_MAX;
    }

    // already exists
    if (dp[amount] != -1)
    {
        return dp[amount];
    }

    int mini = INT_MAX;
    for (int i = 0; i < coins.size(); i++)
    {
        int ans = solveUsingMem(coins, amount - coins[i], dp);
        if (ans != INT_MAX)
        {
            mini = min(mini, 1 + ans);
        }
    }
    dp[amount] = mini;
    return mini;
}

int solveUsingTab(vector<int> &coins, int amount)
{
    // dp[i/amount] = i/amount create krna kein liya kitna
    // minimum number of coins lagenge, now to find minimum amount
    // we will initialise dp with INT_MAX

    // create dp array
    vector<int> dp(amount + 1, INT_MAX);
    
    // base case dekho
    dp[0] = 0; // amount 0 create krna kein liya ans 0 banega 
    for (int i = 1; i <= amount; i++)
    {
        for (int j = 0; j < coins.size(); j++)
        {
            if (i - coins[j] >= 0 && dp[i - coins[j]] != INT_MAX)
            {
                int ans = dp[i - coins[j]];
                dp[i] = min(dp[i], 1 + ans);
            }
        }
    }
    return dp[amount];
}

int coinChange(vector<int> &coins, int amount)
{
    // vector<int> dp(amount + 1, -1);
    // int ans = solveUsingMem(coins, amount, dp);
    // if (ans == INT_MAX)
    // {
    //     return -1;
    // }
    // else
    // {
    //     return ans;
    // }

    int result = solveUsingTab(coins,amount);
    if (result == INT_MAX)
    {
        return -1;
    }
    else
    {
        return result;
    }
}

int main()
{
    vector<int> coins;
    coins.push_back(1);
    coins.push_back(2);
    coins.push_back(5);

    int amount = 11;
    cout << "Ans is : " << solveUsingRec(coins, amount) << endl;
    cout << "Ans is : " << coinChange(coins, amount);

    return 0;
}