
#include <bits/stdc++.h>
using namespace std;

class item
{
public:
    int a, b; // Instance member variable
    // a and b variable are also k/a object varoable
    static int k;
};

// since k is a static variable it will not get the memory only just by declaring it and then we have to define static member variable also.

int item::k; // define-ing static member variable
// now it will get the memory

int main()
{
    item::k = 4; // for both i1 and i2 static member variable will be common
    // another way of writing using class
    // static member variable are also k/a class varoable
    cout << "\nk=" << item::k;
    cout << endl;
    return 0;
}