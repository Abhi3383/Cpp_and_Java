// Leetcode -> Maximum Subarray

#include <bits/stdc++.h>
using namespace std;

int maxSubarrayHelper(vector<int> &v, int start, int end)
{
    if (start == end)
        return v[start];
    int maxLeftBorderSum = INT_MIN, maxRightBorderSum = INT_MIN;
    int mid = start + ((end - start) >> 1);

    int maxLeftSum = maxSubarrayHelper(v, start, mid);
    int maxRightSum = maxSubarrayHelper(v, mid + 1, end);

    int leftBorderSum = 0, rightBorderSum = 0;
    for (int i = mid; i >= start; i--)
    {
        leftBorderSum += v[i];
        if (leftBorderSum > maxLeftBorderSum)
            maxLeftBorderSum = leftBorderSum;
    }
    for (int i = mid + 1; i <= end; i++)
    {
        rightBorderSum += v[i];
        if (rightBorderSum > maxRightBorderSum)
            maxRightBorderSum = rightBorderSum;
    }
    int crossBorderSum = maxRightBorderSum + maxLeftBorderSum;
    return max(maxRightSum, max(maxLeftSum, crossBorderSum));
}
int maxSubArray(vector<int> &nums)
{
    return maxSubarrayHelper(nums, 0, nums.size() - 1);
}
int main() {}
