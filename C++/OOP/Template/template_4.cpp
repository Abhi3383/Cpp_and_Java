#include <bits/stdc++.h>
using namespace std;

template <typename T>
T maxi(T x, T y)
{
    if (x > y)
        return x;
    return y;
}

int main()
{
    int m, n;
    cout << "Enter 2 numbers to find maximum : ";
    cin >> m >> n;
    int sum = maxi<int>(m, n);
    cout << "maximum one is : " << sum;
    return 0;
}