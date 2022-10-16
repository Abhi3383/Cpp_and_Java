#include <bits/stdc++.h>
using namespace std;

// In C there function name must be diffrent.
//  In c++ for FUCNTION OVERLOADING it must satisfy conditions for function signature.
//  Conditions for function signature are :
//  1. Function name may or may not diffrent
//  2. Function Arguments must be diffrent
//  But return type can be avoided

float Area(int);
float Area(int, int);

int main()
{
    int r;
    cout << "Enter the radius of a circle :";
    cin >> r;
    cout << "Area of circle is " << Area(r);
    int l, b;
    cout << "\nEnter the length and breadth of a rectangle : ";
    cin >> l >> b;
    cout << "Area of rectangle is " << Area(l, b);
    return 0;
}

float Area(int r)
{
    return 3.14 * r * r;
}
float Area(int l, int b)
{
    return l * b;
}