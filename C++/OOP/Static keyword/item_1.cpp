/*
🌕Static
In C++ , static keyword can be used in
the following places :
-static local variables → C /C++
-static member variables → C++
-static member functions → C++

🌕 Static member variable

->static member variable needs to define
outside the class body

datatype className :: staticVariable ;

->There is only one copy of static member
variable in the memory for entire class
->static member variables do not belongs
to the object of class, but object
can access static member variable
using dot operator.

static member variable == class variable


🌕static member functions

->static member function are qualified
with the keyword static
->non member function can never be static
static member function can only access
static members of the class
->member functions in class not
performing object specific job, should be static member function
*/

#include <bits/stdc++.h>
using namespace std;

class item
{
public:
    int a, b; // Instance member variable
    static int k;
};

// since k is a static variable it will not get the memory only just by declaring it and then we have to define static member variable also.

int item::k; // define-ing static member variable
// now it will get the memory

int main()
{
    item i1, i2;
    i1.a = 5;
    cout << "\na of i1= " << i1.a;
    cout << "\na of i2= " << i2.a; // garbage
    i1.k = 4;                      // for both i1 and i2 static member variable will be common
    cout << "\nk=" << i2.k;
    cout << endl;
    return 0;
}