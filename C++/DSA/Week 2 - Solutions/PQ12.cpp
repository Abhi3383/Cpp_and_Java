// Given number is odd or even

#include <bits/stdc++.h>
using namespace std;

string evenOdd(int n)
{
    return (n & 1) == 0 ? "Even" : "Odd";
}

int main()
{
    int r;
    cin >> r;
    cout << evenOdd(r);
    return 0;
}