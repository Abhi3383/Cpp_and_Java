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

    Complex operator+(int k)
    {
        Complex temp;
        temp.a = a + k;
        temp.b = b;
        return temp;
    }
    friend Complex operator+(int, Complex);
};
Complex operator+(int k, Complex x)
{
    Complex temp;
    temp.a = k + x.a;
    temp.b = x.b;
    return temp;
}
int main()
{
    Complex c1, c2, c3, c4;
    c1.setData(3, 4);
    c2.setData(5, 6);
    c1.showData();
    c2.showData();
    c3 = c1 + 5; // c3=c1.operator+(5);
    // c3=5+c1; is not possible bcz in binary operator left operator will be caller OBJECT
    // to make it work we make it friend function
    // like this  friend Complex operator+(int, Complex);
    c3.showData();
    c4 = 5 + c1;
    c4.showData();
}