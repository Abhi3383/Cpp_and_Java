#include <bits/stdc++.h>
using namespace std;

class Item
{
private:
    int a, b; // Instance member variables
public:
    friend void f1(Item);
    void setData(int x, int y) // member function
    {
        a = x;
        b = y;
    }
};
class A
{
public:
    void f1();
};
void f1(Item i) // non member function
{
    cout << "Sum is " << i.a + i.b;
}

int main()
{
    Item i1;
    i1.setData(10, 20);
    f1(i1);
    cout << endl;
    return 0;
}