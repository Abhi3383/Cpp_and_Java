#include <bits/stdc++.h>
using namespace std;

// If all values are smaller than target than it will return the last value
// If all values are greater than target than it will return the first value
// If for a target, target is not in range but its near value is present than
// it will return the just greater element than target

int main()
{
    vector<int> v{1, 3, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 9};
    int target = 7;

    // to return the value
    auto ans1 = lower_bound(v.begin(), v.end(), target);
    cout << "ans1 is " << *ans1 << endl;
   

    // to return the index
    auto ans2 = lower_bound(v.begin(), v.end(), target) - v.begin();
    cout << "ans2 is " << ans2 << endl;

    // to return the value
    // if element is not present it will return the next value
    auto ans3 = lower_bound(v.begin(), v.end(), 8);
    cout << "ans3 is " << *ans3 << endl;
    return 0;
}