#include <bits/stdc++.h>
using namespace std;

class Complex
{

private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << endl
             << "real = " << a << " , "
             << "img = " << b;
    }

    friend Complex operator+(Complex, Complex); // friend function
    friend Complex operator-(Complex);          // friend function
};
Complex operator+(Complex x, Complex y) // friend function
{
    Complex temp;
    temp.a = x.a + y.a;
    temp.b = x.b + y.b;
    return temp;
}
Complex operator-(Complex c)
{
    Complex temp;
    temp.a = -c.a;
    temp.b = -c.b;
    return temp;
}
int main()
{
    Complex c1, c2, c3, c4;
    c1.setData(3, 4);
    c2.setData(5, 6);
    c3 = c1 + c2; // c3=operator+(c1,c2);
    c1.showData();
    c2.showData();
    c3.showData();
    c4 = -c3; // c4=operator-(c3);
    c4.showData();
}