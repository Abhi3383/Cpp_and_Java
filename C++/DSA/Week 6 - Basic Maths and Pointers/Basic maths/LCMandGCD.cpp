/*
LCM*HCF=a*b
lcm(a,b)*gcd(a,b)=a*b
lcm(a,b) = (a*b) / (gcd(a,b))
*/

#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long A, long long B)
{
    // code here
    if (A == 0)
        return B;
    if (B == 0)
        return A;

    while (A > 0 && B > 0)
    {
        if (A > B)
        {
            A = A - B;
        }
        else
        {
            B = B - A;
        }
    }
    return A == 0 ? B : A;
}

vector<long long> lcmAndGcd(long long A, long long B)
{
    // code here
    vector<long long> sol;
    long long int solGCD = gcd(A, B);
    long long int solLCM = (long long)(A * B) / solGCD;
    sol.push_back(solLCM);
    sol.push_back(solGCD);

    return sol;
}

int main()
{
    long long A=5, B=10;
    vector<long long> ans = lcmAndGcd(A, B);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}
