#include <bits/stdc++.h>
using namespace std;

class geeks
{
    int a, b, add, sub, mul;
    float div;

public:
    void get();
    void sum();
    void difference();
    void product();
    void divison();
};

inline void geeks::get()
{
    cout << "Enter first value : ";
    cin >> a;
    cout << "Enter second value : ";
    cin >> b;
}

inline void geeks::sum()
{
    add = a + b;
    cout << "Addition of 2 numbers : " << a + b << "\n";
}
inline void geeks::difference()
{
    sub = a - b;
    cout << "Difference of two numbers: " << a - b << "\n";
}

inline void geeks::product()
{
    mul = a * b;
    cout << "Product of two numbers: " << a * b << "\n";
}

inline void geeks::divison()
{
    div = a / b;
    cout << "Division of two numbers: " << a / b << "\n";
}

int main()
{
    cout << "Program using inline functions\n";
    geeks g;
    g.get();
    g.sum();
    g.difference();
    g.product();
    g.divison();
    return 0;
}