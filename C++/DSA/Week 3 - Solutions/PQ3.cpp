#include <bits/stdc++.h>
using namespace std;

// Using STL and brute force
int findDuplicate1(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
            return nums[i];
    }
    return -1;
}

// Using Dutch nation flag algo. -> 2 pointer approach
int findDuplicate2(vector<int> &nums)
{
    int ans = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        int idx = abs(nums[i]);
        if (nums[idx] < 0)
        {
            ans = idx;
            break;
        }
        nums[idx] *= -1;
    }
    return ans;
}

// Positioning method
int findDuplicate(vector<int> &nums)
{
    while (nums[0] != nums[nums[0]])
        swap(nums[0], nums[nums[0]]);
    return nums[0];
}

int findDuplicate4(vector<int> &nums)
{
    unordered_set<int> st;
    for (auto &it : nums)
    {
        int prevsize = st.size();
        st.insert(it);
        if (st.size() == prevsize)
            return it;
    }
    return -1;
}

int main() {}