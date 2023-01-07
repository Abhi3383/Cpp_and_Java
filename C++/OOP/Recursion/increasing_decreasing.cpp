#include <bits/stdc++.h>
using namespace std;

void increasing_decreasing(int m)
{
    if (m == 0)
        return;
    cout << m << " ";
    increasing_decreasing(m - 1);
    cout << m << " ";
    return;
}

int main()
{
    increasing_decreasing(3);
    return 0;
}