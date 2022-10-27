#include <bits/stdc++.h>
using namespace std;

class ABC
{
    int x;

public:
    ABC(int a)
    {
        x = a;
    }
    int getX()
    {
        return x;
    }
};

class IList
{
    int x;
    const int y;
    int &z;
    ABC a1;

public:
    // IList(int a, int b) : y(b), z(x)
    // {
    //     x = a;
    //     a1 = 5;
    // }
    // if write above lines it will throw an error
    // but if we write bcz it will run
    // so we can say that with the help of Initializer list we can call parameterized constructor
    IList(int a, int b) : y(b), z(x), a1(5)
    {
        x = a;
    }
    void display()
    {
        cout << "x = " << x << " , "
             << "y = " << y << " , "
             << "z = " << z << " , "
             << "a1 = " << a1.getX() << endl;
    }
};
int main()
{
    IList l1(3, 4);
    l1.display();
    return 0;
}