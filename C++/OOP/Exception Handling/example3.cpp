#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter 2 numbers " << endl;
    cin >> a >> b;
    try
    {
        if (b == 0)
            throw "Divide by zero Error";
        if (b == 1)
            throw b; // b is of int type
        c = a / b;
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
    catch (int x) // b is of int type
    {
        cout << "2nd case " << x << endl;
    }
    cout << "Result = " << c;
    return 0;
}