#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5;
    int b = 5;

    cout << a << endl;
    cout << &a << endl;
    cout << &b << endl;

    int *ptr = &a;

    // copy pointer
    int *dusraPtr = ptr;

    cout << *ptr << endl;
    cout << *dusraPtr << endl;

    return 0;
}