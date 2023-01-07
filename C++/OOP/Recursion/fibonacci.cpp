#include <bits/stdc++.h>
using namespace std;

int fib(int m)
{
    if (m == 1 || m == 2)
        return 1;
    return fib(m - 1) + fib(m - 2);
}
int main()
{

    int a = fib(5);
    cout << a;
    return 0;
}