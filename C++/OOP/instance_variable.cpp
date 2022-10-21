/*

🌕Members
a,b,setData() and showData() are members of complex

Memebers are of 2 kinds:
1) Instance members
->Instance member variables
->Instance member functions

2)Static members
->Static member variables
->Static member functions

->c1,c2 are objects.
c1 and c2 are instances of class complex.
a and b belongs to same instance of a complex class,
therefore k/a instance member variables.


🌕Instance member funtions
-Functions defined in the class without static keyword are instance member functions.
-Instance member function performs object specific task.
-Instance member function can access any member of the current objet or called object.
- Instance member function can only be called for an object of the same class.

object.instanceMemberFunction();

class ____ {
       function declaration;
};

returnType className :: functionName() //className -> membership label ; :: -> scope resolution operator
{
    ______
    ______
    ______
}
*/
#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int a, b;      // instance member variable
    static int s1; // staic member variable
public:
    void setData(int x, int y)
    {
        static int k;
        a = x;
        b = y;
    }
    inline void showData();
};

void Complex ::showData()
{
    cout << endl
         << "real = " << a << ", img = " << b;
}
int main()
{
    Complex c1, c2;
    c1.setData(3, 4);
    c2.setData(5, 6);
    c1.showData();
    c2.showData();
}