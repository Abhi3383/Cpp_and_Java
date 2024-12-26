// Prime from 1 to N

#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n)
{
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

void primeNo(int n)
{
    for (int i = 1; i <= n; i++)
    {
        bool isPrime=checkPrime(i);
        if (isPrime)
        {
            cout<<i<<" ";
        }
        
    }
}

int main()
{
    int n;
    cin >> n;
    primeNo(n);

    return 0;
}