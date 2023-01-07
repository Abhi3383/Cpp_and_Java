#include <bits/stdc++.h>
using namespace std;

int powerLog(int m, int n)
{
    if (n == 0)
        return 1;
    int x = powerLog(m, n / 2);
    if (n % 2 == 0)
        return x * x;
    else
        return x * x * m;
}
int main()
{

    int a = powerLog(2, 4);
    cout << a;
    return 0;
}