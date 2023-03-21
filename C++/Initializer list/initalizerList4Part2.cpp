// Benefit of Initializer list is even though y is cont we can change the value of it
// we can decided the values at run time.
#include <bits/stdc++.h>
using namespace std;

class IList
{
    int x;
    const int y;

public:
    IList(int a, int b) : y(b)
    {
        x = a;
    }
    void display()
    {
        cout << "x = " << x << " , "
             << "y = " << y << endl;
    }
};

int main()
{
    IList i1(7, 8);
    IList i2(3, 0);
    i1.display();
    i2.display();
    return 0;
}