#include <bits/stdc++.h>
using namespace std;

int stair(int n)
{
    if (n == 1 || n == 2 || n == 3)
        return n;
    int totalWays = stair(n - 1) + stair(n - 2) + stair(n - 3);
    return totalWays;
}

int main()
{

    cout << stair(4);
    return 0;
}