#include <bits/stdc++.h>
using namespace std;

class IList
{
    int x, y;

public:
    // IList(int a, int b)
    // {
    //     x = a;
    //     y = b;
    // }
    // Now instead of doing of what we have done above we can do
    IList(int a, int b) : x(a), y(b)
    {
    }
    // x(a) meaning same as x = a
    // y(b) meaning same as y = b

    void display()
    {
        cout << "x = " << x << "  , "
             << "y = " << y << endl;
    }
};
int main()
{
    IList l(2, 3);
    l.display();
    return 0;
}