#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int s, int e, int target)
{
    if (s > e)
        return -1;

    int mid = s + (e - s) / 2;
    if (arr[mid] == target)
        return mid;

    if (arr[mid] > target)
        return binarySearch(arr, s, mid - 1, target);
    else
        return binarySearch(arr, mid + 1, e, target);
}

int main()
{
    vector<int> v{10, 20, 40, 60, 70, 90, 99};
    int target = 99;

    int n = v.size();
    int s = 0;
    int e = n - 1;
    int ans = binarySearch(v, s, e, target);

    cout << "Ans is :" << ans << endl;

    return 0;
}