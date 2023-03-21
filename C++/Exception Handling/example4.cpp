/*
 * From exaple1 & example2 if we know the corner cases we can throw can a exceptions.
 * now to print only message for all type of cases which would cover all the cases and throw a single message we use "catch(...)"
 */

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
        if (b == 2)
            throw exception();
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
    catch (...)
    {
        cout << "exception() called" << endl;
    }
    cout << "Result = " << c;
    return 0;
}