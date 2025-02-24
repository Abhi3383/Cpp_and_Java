#include <bits/stdc++.h>
using namespace std;

int lastOcc(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;

    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            // ans store
            ans = mid;
            // right search
            s = mid + 1;
        }
        else if (target < arr[mid])
        {
            // left search
            e = mid - 1;
        }
        else if (target > arr[mid])
        {
            // right search
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> v{1, 3, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 9};
    int target = 7;

    int ans = lastOcc(v, target);
    cout << "Last occurence is at " << ans << endl;
    auto ans1 = *upper_bound(v.begin(), v.end(), target);
    cout << ans1 << endl;
    auto ans2 = upper_bound(v.begin(), v.end(), target) - v.begin();
    cout << "ans2 is " << ans2 - 1 << endl;

    return 0;
}