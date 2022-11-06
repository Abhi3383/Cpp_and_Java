/*
Porrbe&Rejecence Vanicble a B &Deri
class base                          | class derived : public base
{                                   |{
    -----------                     |    -----------
    -----------                     |    -----------
};                                  |};

Base *b;        | b = &obj1; ✅ (Base ptr  = base obj)
Derived *d;     | d = &obj2; ✅ (derived ptr  = derived obj)
Base obj1;      | b = &obj2; ✅ (Base ptr  = derived obj)
Derived obj2;   | d = &obj1; ❌ (derived ptr  = base obj)

Base b;
Base *p = &b;
      ^    ^
      |    |
     ptr  obj
Both will get diffrent memory

Derived d;
Base *b = &d;
-------   ---
  ^        ^
  |        |
Compile   Run
time      time
 ^         ^
 |         |
 Type of  Object
 ptr      type

 -> If the constructors are made in private then the object cant be made.

*/
#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base constructor called" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived constructor called" << endl;
    }
};

int main()
{
    Base *b;
    Derived *d;

    Base obj1;
    Derived obj2;

    b = &obj1; // base pointer can point to base object ✅
    cout << endl;
    d = &obj2; // valid = derived pointer can point to derived object ✅
    cout << endl;
    // * parent = &child; ✅
    b = &obj2; // valid = Base ptr can point to derived object ✅

    // * child = &parent; ❌
    // d = &obj1; //Invalid - derived ptr cannot point to base object ❌
    return 0;
}