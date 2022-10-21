#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int img;
    int real;

public:
    void set(int r, int i)
    {
        real = r;
        img = i;
    }

    void add(Complex c)
    {
        cout << real + c.real << " + " << img + c.img << "i";
    }

    void display(Complex c)
    {
        cout << real << " + " << img << "i" << endl; // this line will print c1
                                                     // after c1, c2 will move to Complex C and below line will print c2
        cout << c.real << " + " << c.img << "i" << endl;
    }
};

int main()
{
    Complex c1, c2;
    c1.set(4, 5);
    c2.set(3, 2);
    c1.display(c2);
    c1.add(c2);
    return 0;
}
