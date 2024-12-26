#include <bits/stdc++.h>
using namespace std;

void clearBitsInRange(int n, int i, int j)
{
    int a = (-1 << (i + 1));
    int b = (1 << j) - 1;
    int mask = a | b;
    n = n & mask;
    cout << "after clearing in range " << n << endl;
}

int main()
{
    clearBitsInRange(15, 3, 0);

    return 0;
}
