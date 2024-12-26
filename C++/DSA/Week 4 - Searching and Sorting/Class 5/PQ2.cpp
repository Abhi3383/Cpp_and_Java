#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums{3, 8, 9, 5, 4, 6, 2, 1};

    for (int i = nums.size() - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (nums[j] > nums[j + 1])
                swap(nums[j], nums[j + 1]);
        }
    }
    for (auto i : nums)
    {
        cout << i << " ";
    }

    return 0;
}