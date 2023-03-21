#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int a, b;      // instance member variable
    static int s1; // staic member variable
public:
    void setData(int x, int y)
    {
        static int k;
        a = x;
        b = y;
    }
    void showData()
    {
        cout << endl
             << "real = " << a << ", img = " << b;
    }
};

void f1()
{
    int x = 0; // local variable
    // life long is throughout the function
    static int y; // static local variable
    // life long is throughout the program
    x++;
    y++;
    cout << "\n"
         << x << " " << y;
}

int main()
{
    Complex c1, c2;
    c1.setData(3, 4);
    c2.setData(5, 6);
    c1.showData();
    c2.showData();
    f1();
    f1();
}