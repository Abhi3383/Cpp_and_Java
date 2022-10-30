#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void showData()
    {
        cout << endl
             << "real = " << a << " , "
             << "img = " << b;
    }
    Complex sumGreater(Complex c)
    {
        // address of c1 is inside this
        //  if it has address of pointer inside object
        //  so to represent that object
        if ((a + b) > (c.a + c.b))
            return *this;
        else
            return c;
    }
};

void inputData(Complex *p)
{
    int x, y;
    cout << "Enter real and img part of complex number : ";
    cin >> x >> y;
    p->setData(x, y);
}

int main()
{
    Complex c1, c2, c3;
    inputData(&c1);
    c1.showData();
    c2.setData(4, 5);
    c3 = c1.sumGreater(c2);
    c3.showData();
    cout << endl;
    return 0;
}