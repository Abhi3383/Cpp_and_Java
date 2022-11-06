/*this pointer stores the address of an object, which is used to invoke/call a member function.
Memory is also alloted to empty class of 1 byte.
size of empty class = 1 byte.
class pointer use-to access any member,object,directly use operator to access any member.
*/

// To return refrence to the calling object
/* Reference to the calling object can be returned
Test &Test::func()
{
    Some processing
    return *this;
}
*/

#include <bits/stdc++.h>
using namespace std;

class geeks
{
private:
    int x, y;

public:
    geeks(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    geeks &setX(int a)
    {
        x = a;
        return *this;
    }
    geeks &setY(int b)
    {
        y = b;
        return *this;
    }

    void print()
    {
        cout << "x = " << x << " y = " << y << endl;
    }
};

main()
{
    geeks g1(5, 5);
    g1.setX(10).setY(10);
    g1.print();
    return 0;
}