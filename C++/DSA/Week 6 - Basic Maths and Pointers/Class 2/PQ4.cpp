#include <bits/stdc++.h>
using namespace std;

void solve(int brr[]) // pointer of arr
{
    cout << "Size inside solve function : " << sizeof(brr) << endl;
    cout << "brr: " << brr << endl; // brr = &arr
    cout << "&brr: " << &brr << endl; // new pointer is created, address of brr

    brr[0] = 50; // change in the main arr
}

int main()
{
    int arr[10] = {1, 2, 3, 4};
    cout << "Size inside main function : " << sizeof(arr) << endl;
    cout << "arr : " << arr << endl; // or &arr or &arr[0]
    cout << "&arr : " << &arr << endl;
    cout << "&arr[0] : " << &arr[0] << endl
         << endl;

    // printing array inside main
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl
         << endl
         << "Now calling solve function" << endl;

    solve(arr); // passing the address of arr
                // solve(&arr)

    cout << "Wapas main function me aagye h " << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}