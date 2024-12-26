// Print digit in desc order

#include <bits/stdc++.h>
using namespace std;

void printDigits(int &n)
{
    if (n == 0)
        return;

    int a = n % 10;
    cout << a << endl;
    n = n / 10;
    printDigits(n);
}

int main()
{
    int n = 647;
    printDigits(n);

    return 0;
}