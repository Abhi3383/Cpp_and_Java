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
    Complex c1(3, 4),
        c2(2),
        c3,
        c4 = c1.add(c2);
    c1.showData();
    c2.showData();
    c3.showData();
    c4.showData();
    return 0;
}