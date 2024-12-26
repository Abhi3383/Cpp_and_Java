// Print digit in asc order

#include <bits/stdc++.h>
using namespace std;

void printDigits(int n)
{
    if (n == 0)
        return;

    int new_ = n / 10;
    printDigits(new_);

    int a = n % 10;
    cout << a << endl;
}

int main()
{
    int n = 647;
    printDigits(n);

    return 0;
}