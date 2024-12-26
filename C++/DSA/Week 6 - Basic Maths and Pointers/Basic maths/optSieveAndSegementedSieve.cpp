#include <bits/stdc++.h>
using namespace std;

vector<bool> sieve1(int n)
{
    vector<bool> prime(n, true);
    prime[0] = prime[1] = false;
    int ans = 0;

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            ans++;
            int j = i * i;
            while (j < n)
            {
                prime[j] = false;
                j += i;
            }
        }
    }
    return prime;
}
vector<bool> sieve2(int n)
{
    vector<bool> prime(n, true);
    prime[0] = prime[1] = false;
    int ans = 0;

    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            ans++;
            int j = i * i;
            while (j < n)
            {
                prime[j] = false;
                j += i;
            }
        }
    }
    return prime;
}

vector<bool> segmentedSieve(int L, int R)
{
    // get me prime array, i will use it to mark seg Sieve
    vector<bool> sieve = sieve2(sqrt(R));
    vector<int> basePrimes;
    for (int i = 0; i < sieve.size(); i++)
    {
        if (sieve[i])
        {
            basePrimes.push_back(i);
        }
    }

    vector<bool> segSieve(R - L + 1, true);
    if (L == 1 || L == 0)
    {
        segSieve[L] = false;
    }
    for (auto prime : basePrimes)
    {
        int first_mul = (L / prime) * prime;
        if (first_mul < L)
        {
            first_mul += prime;
        }
        int j = max(first_mul, prime * prime);
        while (j <= R)
        {
            segSieve[j - L] = false;
            j += prime;
        }
    }
    return segSieve;
}

int main()
{
    vector<bool> opt1 = sieve1(25);
    for (int i = 0; i <= 25; i++)
    {
        if (opt1[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
    vector<bool> opt2 = sieve2(25);
    for (int i = 0; i <= 25; i++)
    {
        if (opt2[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
    int L = 110;
    int R = 130;
    vector<bool> segSieve = segmentedSieve(L, R);
    for (int i = 0; i < segSieve.size(); i++)
    {
        if (segSieve[i])
        {
            cout << i + L << " ";
        }
    }

    return 0;
}