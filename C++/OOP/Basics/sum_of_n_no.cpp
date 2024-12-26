#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum, i = 1;
    cout << "Enter the vaule : ";
    cin >> n;
    while (i < n)
    {
        sum += n;
        i++;
    }
    cout << sum << endl;
}