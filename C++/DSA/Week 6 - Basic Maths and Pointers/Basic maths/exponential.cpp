#include <bits/stdc++.h>
using namespace std;

int slowExponentiation(int a, int b)
{
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans *= a;
    }
    return ans;
}
int fastExponentiation(int a, int b)
{
    int ans = 1;
    while (b > 0)
    {
        if (b & 1) // if b is odd
        {
            ans*=a; //have to make a extra multiply
        }
        a*=a;
        b>>=1; // divide by 2;
    }
    return ans;
}

int main()
{
    cout << slowExponentiation(5, 4) << endl;
    cout << fastExponentiation(2, 5) << endl;
    return 0;
}