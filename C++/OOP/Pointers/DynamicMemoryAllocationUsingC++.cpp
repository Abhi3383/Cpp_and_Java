#include <bits/stdc++.h>
using namespace std;

// in C++ we use new and delete

int main()
{
    int a;
    int *p;
    // same as p=(int *)malloc(sizeof(int));
    p = new int;
    *p = 10;
    // same as free(p);
    delete p;
    p = new int[20];
    // to free an array we write like this
    delete[] p;
    return 0;
}