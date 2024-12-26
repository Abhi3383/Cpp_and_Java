#include <bits/stdc++.h>
using namespace std;

void clearLastIBits(int n, int i)
{
    int mask = (-1 << i);
    n = n & mask;
    cout << "after clearing last i bits: " << n << endl;
}

int main()
{
    int n = 7;
    clearLastIBits(n, 2);

    return 0;
}
