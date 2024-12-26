#include <bits/stdc++.h>
using namespace std;

bool checkPowerOf2(int n)
{
    if ((n & (n - 1)) == 0)
        return true;
    else
        return false;
}

void clearIthBit(int &n, int i)
{
    int mask = ~(1 << i);
    n = n & mask;
    // cout << "aster clearing " << ans << endl;
}

void updateIthBit(int &n, int i, int target)
{
    clearIthBit(n, i);
    int mask = target << i;
    n = n | mask;
    cout << "after updating : " << n << endl;
}


int main()
{
    cout << (16 & 15) << endl;
    cout << "Power of 2 ans: " << checkPowerOf2(3) << endl;

    int n=10;
    updateIthBit(n,0,1);
    updateIthBit(n,1,0);

    return 0;
}
