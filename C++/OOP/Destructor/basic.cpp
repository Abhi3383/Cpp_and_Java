#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    Complex() // non-parameterized constructor
    {
        a = 0;
        b = 0;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    ~Complex() {} // Destructor
};

int main()
{

    return 0;
}