#include <bits/stdc++.h>
using namespace std;

int stair(int n)
{
    if (n == 1 || n == 2)
        return n;
    int totalWays = stair(n - 1) + stair(n - 2);
    return totalWays;
}

int main()
{

    cout << stair(5);
    return 0;
}