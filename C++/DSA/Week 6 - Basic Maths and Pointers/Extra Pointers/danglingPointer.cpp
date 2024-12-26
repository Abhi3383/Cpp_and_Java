// What is a Dangling Pointer?
// A dangling pointer is a pointer that points to a memory location that has been freed or deallocated. When you dereference a dangling
// pointer, the program may crash or exhibit undefined behavior. This can be a serious problem in C+ +, where pointers are widely used to
// manage memory and data structures.
// Dangling pointers typically arise when you delete or free a block of memory that a pointer points to, but then fail to update the pointer to
// reflect the deallocation. The pointer still points to the original memory location, even though that memory has been freed and may have be
// reused for other purposes.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *p = new int;
    *p = 42;
    delete p;
    cout << *p << endl;

    return 0;
}