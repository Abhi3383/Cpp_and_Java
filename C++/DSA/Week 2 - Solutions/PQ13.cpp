// Find the factorial

#include <bits/stdc++.h>
#define int long long
using namespace std;

int findFact(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res = res * i;
    }
    return res;
}

signed main()
{

    int n;
    cin >> n;
    assert(n<=25);
    cout << findFact(n);

    return 0;
}