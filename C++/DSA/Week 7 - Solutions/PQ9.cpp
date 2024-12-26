// Leetcode -> distribute-repeating-integers

#include <bits/stdc++.h>
using namespace std;

bool canDistributeHelper(vector<int> &counts, vector<int> &quantity,
                         int ithCustomer)
{

    if (ithCustomer == quantity.size())
        return true;

    for (int i = 0; i < counts.size(); i++)
    {
        if (counts[i] >= quantity[ithCustomer])
        {
            counts[i] -= quantity[ithCustomer];
            if (canDistributeHelper(counts, quantity, i + 1))
                return true;
            counts[i] += quantity[ithCustomer];
        }
    }
    return false;
}
bool canDistribute(vector<int> &nums, vector<int> &quantity)
{
    unordered_map<int, int> countMap;
    for (auto num : nums)
        countMap[num]++;
    vector<int> counts;
    for (auto it : countMap)
        counts.push_back(it.second);
    return canDistributeHelper(counts, quantity, 0);
}

int main() {}