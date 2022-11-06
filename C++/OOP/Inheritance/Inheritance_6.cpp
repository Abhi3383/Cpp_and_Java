#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    void printBAse()
    {
        cout << "Base function called" << endl;
    }
};

class Derived : public Base
{
public:
    void printDerived()
    {
        cout << "Derived function called" << endl;
    }

    // Function overriding in inheritance
    // overriding is between 2 inherited class
    void printBAse()
    {
        cout << "Modified function called" << endl;
    }
};

int main()
{
    Base *b;
    Derived *d;

    Base obj1;
    Derived obj2;

    b = &obj1; // base pointer can point to base object ✅
    // pointer accessed by arrow
    b->printBAse();
    // b->printDerived(); error bcz ptr can only access base class

    d = &obj2;
    d->printBAse();
    d->printDerived();

    b = &obj2;
    // the type of ptr it will be asble to access the function of that class only
    b->printBAse();
    // b->printDerived(); error because base p-tr cannot access derived function

    // d= &obj1; error because since derived ptr can accessthe the oject of its class only
    // now since we are trying to access the object of parent class it will not be possible
    return 0;
}