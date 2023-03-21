#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex()
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

    // in copy constructor parameters are passed as refrence.
    Complex(Complex &c)
    {
        a = c.a; // a is from c4 and c.a is from c1
        b = c.b; // b is from c4 and c.b is from c1
    }
    ~Complex()
    {
        cout << "\nbye"; // 5 objects 5 times bye will get printed
    }
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << "\nreal = " << a << " , "
             << "img  = " << b;
    }
    Complex add(Complex c)
    {
        Complex temp(0, 0);
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};

int main()
{
    Complex c1(3, 4), c2(2, 1), c3(2), c4;
    Complex c5 = c1;
    c1.showData();
    c2.showData();
    c3.showData();
    return 0;
}