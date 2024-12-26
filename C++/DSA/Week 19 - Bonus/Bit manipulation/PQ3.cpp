#include <bits/stdc++.h>
using namespace std;

void setithBit(int n, int i)
{
    int mask = 1 << i;
    int ans = n | mask;
    cout << "after setting: " << ans << endl;
}

void clearIthBit(int n, int i)
{
    int mask = ~(1 << i);
    n = n & mask;
    cout << "aster clearing : " << n << endl;
}

int main()
{
    setithBit(10, 2);
    clearIthBit(10, 1);
}