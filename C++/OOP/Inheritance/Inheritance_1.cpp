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
    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }
};

int main()
{
    Complex c1, c2;
    c1.set(4, 5);
    c2.set(3, 2);
    c1.display();
    c2.display();
    return 0;
}
