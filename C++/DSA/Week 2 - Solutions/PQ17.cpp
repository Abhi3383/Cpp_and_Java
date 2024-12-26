// GFG -> Set kth Bit

#include <bits/stdc++.h>
using namespace std;

int setKthBit(int N, int K)
{
    // Write Your Code here
    int mask = 1 << K;
    int ans = N | mask;
    return ans;
}

int main()
{

    int N, K;
    cin >> N >> K;

    int ans = setKthBit(N, K);
    cout << ans << endl;
    return 0;
}