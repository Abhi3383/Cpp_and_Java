/* Multiple inheritance

                       A
                       |
    -----------------------------------------
    |                  |                    |
    x                  y                    z

*/

#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void printX()
    {
        cout << "PrintX of A" << endl;
    }
};

class B
{
public:
    void printY()
    {
        cout << "PrintY of B" << endl;
    }
};

class C : public A, public B
{
};

int main()
{
    C c;
    c.printX();
    c.printY();

    c.A::printX();
    c.B::printY();
    return 0;
}