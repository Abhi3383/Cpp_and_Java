#include <bits/stdc++.h>
using namespace std;

int add(int, int, int = 0);
int main()
{
    int a, b;
    cout << "Enter 2 numbers : ";
    cin >> a >> b;
    cout << "Sum is : " << add(a, b);
    cout << endl;
    int c;
    cout << "Enter 3 numbers : ";
    cin >> a >> b >> c;
    cout << "Sum is : " << add(a, b, c);
    cout << endl;
    return 0;
}

inline int add(int x, int y, int z)
{
    return x + y;
}