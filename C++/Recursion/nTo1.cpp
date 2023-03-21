#include <bits/stdc++.h>
using namespace std;

int decreasing(int m)
{
    if (m == 0)
        return 0;
    cout << m << " ";
    decreasing(m - 1);
}

int main()
{
    int print = decreasing(10);
    return 0;
}