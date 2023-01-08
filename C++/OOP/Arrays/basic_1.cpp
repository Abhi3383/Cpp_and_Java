#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[] = {1, 2, 3, 4};

    cout << "sizeof(array) : " << sizeof(array) << endl;
    cout << "sizeof(array[0]) : " << sizeof(array[0]) << endl;
    cout << "length of array : " << sizeof(array) / sizeof(array[0]) << endl;

    int arr[4];
    // garbage values will get printed
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
}