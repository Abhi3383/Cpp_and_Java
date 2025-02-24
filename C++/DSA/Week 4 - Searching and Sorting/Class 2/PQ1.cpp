#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int target, int start, int end)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int element = arr[mid];
        if (element == target)
            return mid;
        if (element > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    // element not found
    return -1;
}
int findPivot(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (mid + 1 < arr.size() && arr[mid] > arr[mid + 1])
            return mid;
        if (mid - 1 >= 0 && arr[mid - 1] > arr[mid])
            return mid - 1;

        if (arr[s] >= arr[mid])
            e = mid - 1;
        else
            s = mid;
        mid = s + (e - s) / 2;
    }
    return s;
}

int search(vector<int> &nums, int target)
{
    int pivotIndex = findPivot(nums);

    if (target >= nums[0] && target <= nums[pivotIndex])
    {
        // search in array A
        int ans = binarySearch(nums, target, 0, pivotIndex);
        return ans;
    }

    if (pivotIndex + 1 < nums.size() &&
        target >= nums[pivotIndex + 1] && target <= nums[nums.size() - 1])
    {
        // search in array B
        int ans = binarySearch(nums, target, pivotIndex + 1, nums.size() - 1);
        return ans;
    }
    return -1;
}

int main()
{
    vector<int> v{4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int ans = search(v, target);
    cout << "ans : " << ans;

    return 0;
}