/*
gcd(a,b) = gcd(a-b,b) (a>b)
gcd(a,b) = gcd(b-a,a) (b>a)

Apply this till one of the parameter becomes zero.
*/

#include <bits/stdc++.h>
using namespace std;

int gcd(int A, int B)
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

int main()
{
    int t;

    int A, B;
    cin >> A >> B;
    cout << gcd(A, B) << "\n";

    return 0;
}
