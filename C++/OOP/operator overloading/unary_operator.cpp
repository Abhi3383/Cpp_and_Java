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
    Complex operator+(Complex c)
    {
        Complex temp(0, 0);
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
    Complex operator-()
    {
        Complex temp;
        temp.a = -a; // a in -a is from c3 since c3 is caller object
                     // temp.a -> -8 = -(8);
                     // a and b of c3 will not get changed
                     // whatever will -(minus) will return on that -(minus) will be there
        temp.b = -b;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3, c4;
    c1.set(3, 4);
    c2.set(5, 6);
    c3 = c1 + c2;
    c1.showData();
    c2.showData();
    c3.showData();
    c4 = -c3; // unary operator
    // c3 called -(minus) operator then whatever -(minus) returned
    // has been assigned to c4
    c4.showData();
    Complex c5 = -c4 + c3;
    c5.showData();
    return 0;
}