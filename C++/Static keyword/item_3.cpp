// function which are not working object specific make it static member function.
// we can call static members without object thorugh class name can be accessed.

#include <bits/stdc++.h>
using namespace std;

class item
{
private:
    int a, b; // Instance member variable
    // a and b variable are also k/a object varoable
    static int k, d;

public:
    void setA(int x)
    {
        a = x;
    }
    void setB(int y)
    {
        b = y;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
    void setd(int p)
    {
        d = p;
    }
    int getd()
    {
        return d;
    }
    // we cannot call a and b in static function sincea static can be called without object
    // therefore if a and b will not have a object then whose object will they be considered.
    static void setk(int z)
    {
        k = z;
    }
    static int getk()
    {
        return k;
    }
};

int item::d;
int item::k; // define-ing static member variable
// now it will get the memory

int main()
{
    item i1, i2;
    i1.setA(5);
    cout << "a=" << i1.getA(); // garbage
    i1.setd(4);
    cout << "\nd=" << i2.getd();
    item::setk(4);
    cout << "\nk=" << item::getk();
    cout << endl;
    return 0;
}

/* ---------------------
   |       i1          |
   |    -----------    |
   |    |    a     |   |
   |    |          |   |
   |    |    b     |   |
   |    |          |   |
   |    ------------   |
   |                   |
   |         i2        |
   |    -----------    |
   |    |    a     |   |
   |    |          |   |
   |    |    b     |   |
   |    |          |   |
   |    ------------   |
   |                   |
   ---------------------

*/
