// selection sort
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums{3, 8, 9, 5, 4, 6, 2, 1};

    //outer loop -> (n-1) rounds
    for (int i = 0; i < nums.size() - 1; i++)
    {
        int index = i;
         //inner Loop -> index of minimum element in range i->n
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[j] < nums[index])
                index = j;
        }
        swap(nums[i], nums[index]);
    }

    for (auto i : nums)
    {
        cout << i << " ";
    }
    return 0;
}