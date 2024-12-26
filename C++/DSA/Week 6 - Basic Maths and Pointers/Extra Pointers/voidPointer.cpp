#include <bits/stdc++.h>
using namespace std;

int main()
{
    // To use a void pointer in C++,we must first cast it to a specific data type.
    // For e.g., if we want to use a void pointer to point to an integer, we cast
    // it to an int* data type.

    // static memory allocation
    void *ptr;
    int x = 10;
    ptr = &x;
    // cout<<*ptr<<endl; error
    int *intPtr = static_cast<int *>(ptr);
    cout << *intPtr << endl;

    // dynamic memory allocation
    int *ptrr = new int;
    void *voidPtr = ptrr; // =&ptrr
    int *inPtr = static_cast<int *>(voidPtr);
    *inPtr=10;
    cout << *ptrr << endl;

    return 0;
}