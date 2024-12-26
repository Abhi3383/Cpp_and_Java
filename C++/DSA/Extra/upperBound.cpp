#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{1, 3, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 9};
    int target = 7;

    // to return the value
    // even if element is present it will only return the next element.
    auto ans1 = upper_bound(v.begin(), v.end(), target);
    cout << "ans1 is " << *ans1 << endl;

    // to return the index
    // even if element is present it will only return the next index.
    // to adjust we do -1 from ans
    auto ans2 = upper_bound(v.begin(), v.end(), target) - v.begin();
    cout << "ans2 is " << ans2 << endl; // index of value
    cout << "ans3 is " << ans2 - 1 << endl; // index of target

    return 0;
}