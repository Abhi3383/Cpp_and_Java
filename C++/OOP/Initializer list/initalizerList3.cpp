#include <bits/stdc++.h>
using namespace std;

class IList
{
    int x, y;

public:
    IList(int a, int b) : x(a), y(x)
    // but we cannot write y(a), x(y)
    // it will print garbage values
    // its bcz we decalred x first in int x,y;
    // so x has to run first and it must go like this x(a), y(x)
    //                                             or y(a), x(b)
    {
    }
    void display()
    {
        cout << "x = " << x << " , "
             << "y = " << y << endl;
    }
};

int main()
{
    IList i(7, 8);
    i.display();

    return 0;
}