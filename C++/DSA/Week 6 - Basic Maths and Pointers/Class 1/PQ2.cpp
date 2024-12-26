#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a = 5;
    // pointer create
    int *ptr = &a;

    // access the value ptr is pointing to
    cout << "Address of a is: " << &a << endl;
    cout << "value stored at ptr is: " << ptr << endl;
    cout << "value ptr is pointing to is: " << *ptr << endl;
    cout << "Address of ptr is: " << &ptr << endl;

    int *p = &a;

    cout << "size of (p) is : "<< sizeof(p) << endl;

    char ch = 'b';
    char *c = &ch;

    cout << sizeof(c) << endl;

    // BAD PRACTICE int *ptr;
    cout << *ptr << endl;

    // NULL POINTER 
    *ptr = 0;
    cout << *ptr << endl;

    return 0;
}