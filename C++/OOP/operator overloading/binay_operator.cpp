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
};

int main()
{
    Complex c1, c2, c3;
    c1.set(3, 4);
    c2.set(5, 6);
    c3 = c1 + c2; // another way of writing it is
                  // c3 = c1.operator+(c2);
                  // c1 called + and c2 is geting passed as an argument
                  // then whatever + returned is getting saved in c3.
    c1.showData();
    c2.showData();
    c3.showData();
    return 0;
}