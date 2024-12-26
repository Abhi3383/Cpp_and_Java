#include <bits/stdc++.h>
using namespace std;

void printName()
{
    int n;
    cout << "Enter the value of n " << endl;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "babbar" << endl;
    }
}

void printNumber(int num)
{
    cout << num << endl;
}

int main()
{
    // function call
    printName();

    int a = 5;
    cout << "Address of a is: " << &a << endl;

    printNumber(a);
}