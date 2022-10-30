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
    Complex *p;
    p = new Complex;
    p->setData(10, 20);
    p->showData();
    delete p;
    return 0;
}