#include <bits/stdc++.h>
using namespace std;

void increasing(int m)
{
    if (m == 0)
        return;
    increasing(m - 1);
    cout << m << " ";
    return;
}

int main()
{
    increasing(10);
    return 0;
}