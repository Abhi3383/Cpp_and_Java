#include <bits/stdc++.h>
using namespace std;

int main()
{
    // accumulate(startingIndex, endingIndex, initialSum);

    int a[5] = {5, 2, 8, 1, 7};
    int n = 5;
    int ans1 = accumulate(a, a + n, 0);
    cout << "ans1 : " << ans1 << endl;

    vector<int> vec{5, 2, 8, 1, 7};
    int ans2 = accumulate(vec.begin(), vec.end(), 5);
    cout << "ans2 : " << ans2 << endl;
}