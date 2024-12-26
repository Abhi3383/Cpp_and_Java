// Check given number is prime or not

#include <bits/stdc++.h>
using namespace std;

string checkPrime(int n)
{
    for (int i = 2; i < n; i++)
        return (n % i != 0) ? "Prime" : "Non prime";
    
    return "0";
}

int main()
{
    int n;
    cin >> n;
    cout << checkPrime(n);

    return 0;
}
