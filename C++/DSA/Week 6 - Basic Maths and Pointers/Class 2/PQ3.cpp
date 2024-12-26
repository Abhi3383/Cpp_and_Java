#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10];
    cout << "sizeof(arr) : " <<sizeof(arr) << endl;

    int *p = arr;
    cout << "arr : " << arr << endl; // or &arr
    cout << "*arr : " << *arr << endl; // garbage value
    cout << "p : " << p << endl;
    cout << "&p : " << &p << endl;
    cout << "sizeof(p) : " << sizeof(p) << endl;
    cout << "*p : " << *p << endl;
    cout << "sizeof(*p) : " << sizeof(*p) << endl;

    return 0;
}