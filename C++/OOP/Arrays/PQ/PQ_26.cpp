/*
Given a vector arr[] sorted in increasing order. Return an array of squares of each
number sorted in increasing order. Where size of vector 1<size<101.
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int size;
    cin >> size;
    vector<int> nums(size);
    int i = 0;
    for (i = 0; i < size; i++)
    {
        cin >> nums[i];
    }
    int left = 0, right = size - 1;
    vector<int> ans(nums.size(), 0);
    //                  ^
    //                  |
    //              size of vector
    // going in for last element of vector
    //              |
    int ind = nums.size() - 1;
    while (left <= right && ind >= 0)
    {
        if (abs(nums[left]) > abs(nums[right]))
        {
            ans[ind] = nums[left] * nums[left];
            ind--;
            left++;
        }
        else
        {
            ans[ind] = nums[right] * nums[right];
            ind--;
            right--;
        }
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}
