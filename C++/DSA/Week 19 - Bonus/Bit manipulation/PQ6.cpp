#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n)
{
    int count = 0;
    while (n != 0)
    {
        int lastBit = n & 1;
        if (lastBit)
            count++;
        // right shift
        n = n >> 1;
    }
    return count;
}

int countSetBitsFast(int n)
{
    int count = 0;
    while (n != 0)
    {
        // remove last set bit
        n = (n & (n - 1));
        count++;
    }
    return count;
}

int main()
{
    cout << "Number of set bits: " << countSetBits(1024) << endl;
    cout << "Number of set bits: " << countSetBitsFast(1024) << endl;

    return 0;
}
