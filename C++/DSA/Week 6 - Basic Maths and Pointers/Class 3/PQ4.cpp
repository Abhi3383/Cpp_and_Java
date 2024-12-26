#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *p = &a;
    int **ptr = &p;

    cout << "BEFORE" << endl;
    cout << "a : " << a << endl;
    cout << "&a : " << &a << endl;
    cout << "*p : " << *p << endl;
    cout << "p : " << p << endl;
    cout << "&p : " << &p << endl;
    cout << "**ptr : " << **ptr << endl;
    cout << "*ptr : " << *ptr << endl;
    cout << "ptr : " << ptr << endl;
    cout << "&ptr : " << &ptr << endl;

    **ptr = **ptr + 1;

    cout << endl
         << "AFTER" << endl;
    cout << "a : " << a << endl;
    cout << "&a : " << &a << endl;
    cout << "*p : " << *p << endl;
    cout << "p : " << p << endl;
    cout << "&p : " << &p << endl;
    cout << "**ptr : " << **ptr << endl;
    cout << "*ptr : " << *ptr << endl;
    cout << "ptr : " << ptr << endl;
    cout << "&ptr : " << &ptr << endl;

    return 0;
}