#include <bits/stdc++.h>
using namespace std;

int main()
{

     int arr[4] = {12, 44, 66, 18};

     cout << "arr : " << arr << endl;
     cout << "*arr : " << *arr << endl;
     cout << "arr[0] : " << arr[0] << endl;
     cout << "&arr : " << &arr << endl;
     cout << "&arr[0] : " << &arr[0] << endl
          << endl;

     int *p = arr;
     cout << "p : " << p << endl;
     cout << "sizeof(p) : " << sizeof(p) << endl;
     cout << "&p : " << &p << endl;
     cout << "sizeof(&p) : " << sizeof(&p) << endl;
     cout << "*p : " << *p << endl;
     cout << "sizeof(*p) : " << sizeof(*p) << endl
          << endl;

     cout << "*arr : " << *arr << endl;
     cout << "arr[0] : " << arr[0] << endl;
     cout << "*arr + 1 : " << *arr + 1 << endl;
     cout << "*(arr) + 1  : " << *(arr) + 1 << endl;
     cout << "*(arr + 1) : " << *(arr + 1) << endl;
     cout << "arr[1] : " << arr[1] << endl;
     cout << "*(arr + 2) : " << *(arr + 2) << endl;
     cout << "arr[2] : " << arr[2] << endl;
     cout << "*(arr + 3) : " << *(arr + 3) << endl;
     cout << "arr[3] : " << arr[3] << endl;

     int i = 0;
     cout << "arr[i] : " << arr[i] << endl;
     cout << "i[arr] : " << i[arr] << endl;
     cout << "*(arr + i) : " << *(arr + i) << endl;
     cout << "*(i + arr) : " << *(i + arr) << endl;

     // arr = arr + 2; error
     int *q = arr;
     q = q + 2;

     return 0;
}