// Preivously the type of pointer the type of object and its function was being called
// Now as soon as we write the virtual before the fucntion ,now according to the object, pointer will be called

/* Compile Time Binding                    | Run time Binding
-> By default ->  Compile Time Binding     | Virtual -> Run time Binding
-> Function binds to pointer type          | Object type

*/

#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    virtual void printBAse()
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

    b = &obj1;
    b->printBAse();

    d = &obj2;
    d->printBAse();
    d->printDerived();

    b = &obj2;
    b->printBAse();

    return 0;
}