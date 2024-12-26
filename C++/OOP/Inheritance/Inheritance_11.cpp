#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    A()
    {
        cout << "A() called" << endl;
    }
};

class B : virtual public A
{
public:
    B() : A()
    {
        cout << "B() called" << endl;
    }
};

class C : virtual public A
{
public:
    C() : A()
    {
        cout << "C() called" << endl;
    }
};

class D : public B, public C
{
public:
    D() : B(), C()
    {
        cout << "D() called" << endl;
    }
};

int main()
{
    D d;
    return 0;
}
