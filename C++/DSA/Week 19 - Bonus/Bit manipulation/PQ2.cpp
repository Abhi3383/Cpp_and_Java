#include <bits/stdc++.h>
using namespace std;

int getithBit(int n, int i)
{
    int mask = 1 << i;
    int ans = n & mask;
    if (ans == 0)
        return 0;
    else
        return 1;
}

int main()
{
    int ans1 = getithBit(10, 0);
    cout << ans1 << endl;
    int ans2 = getithBit(10, 1);
    cout << ans2 << endl;
    int ans3 = getithBit(10, 2);
    cout << ans3 << endl;
    int ans4 = getithBit(10, 3);
    cout << ans4 << endl;
    int ans5 = getithBit(10, 4);
    cout << ans5 << endl;

    return 0;
}