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
    Complex c1;
    inputData(&c1);
    c1.showData();
    cout << endl;
    return 0;
}