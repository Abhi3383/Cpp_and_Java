// A wild pointer is a pointer in C+ + that is uninitialized or has been deleted. This means that the pointer does not point to a valid memory
// location, and accessing or dereferencing a wild pointer can result in undefined behavior.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Common scenrarios where wild pointers can occur

    // 1. Uninitialized Pointer
    int *ptr;
    cout << *ptr << endl; // undefined behaviour

    // 2. Deleting pointer
    int *ptrr = new int;
    delete ptrr;
    cout << *ptrr << endl; // undefined behaviour

    // 3. Pointer to a non existent variable
    // int *ptr = &x;
    // cout << *ptr << endl;

    // To avoid wild pointers in C++, you should always initialize your pointers to a valid memory location or to nullptr if they are not pointing to
    // anything. You should also avoid deleting pointers that have not been allocated using the new operator. If you do delete a pointer, make sure
    // to set it to nullptr to prevent it from becoming a wild pointer. Finally, you should always check if a pointer is pointing to a valid memory
    // location before dereferencing it to avoid accessing a wild pointer.

    int *point = new int;
    cout << *point << endl;
    point = nullptr;
    delete point;
    cout << *point << endl;

    return 0;
}
