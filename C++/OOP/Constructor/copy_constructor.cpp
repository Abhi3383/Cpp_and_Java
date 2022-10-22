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

    // in copy constructor parameters are passed as refrence.
    Complex(Complex &c)
    {
        a = c.a; // a is from c4 and c.a is from c1
        b = c.b; // b is from c4 and c.b is from c1
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
    Complex c1(3, 4), c3;
    Complex c4 = c1; // this line is copy constructor
    // c1's refrence is getting passed and it is going to c
    // c is going to represent c1 but c is not a object
    // rather c is just like another name of c1
    c1.showData();
    c3.showData();
    c4.showData();
    return 0;
}