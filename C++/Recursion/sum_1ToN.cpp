#include <bits/stdc++.h>
using namespace std;

int pow(int m)
{
    if (m == 0)
        return 0;
    return m + pow(m - 1);
}
// or
/*

void sum(int n, int s)
{
    if (n == 0)
        {
        cout<<s;
        return;
        }
    sum(n - 1,s + n);
    return;
}

*/
int main()
{

    int a = pow(5);
    cout << a;
    return 0;
}