#include <bits/stdc++.h>
using namespace std;
// insertion sort
int main()
{
    vector<int> nums{3, 8, 9, 5, 4, 6, 2, 1};

    for (int i = 1; i < nums.size(); i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (nums[j] < nums[j - 1])
                swap(nums[j], nums[j - 1]);
            else
                break;
        }
    }
    for (auto i : nums)
    {
        cout << i << " ";
    }

    return 0;
}