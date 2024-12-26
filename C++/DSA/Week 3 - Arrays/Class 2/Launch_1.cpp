#include <bits/stdc++.h>
using namespace std;

int main()
{

    // create vector
    vector<int> arr;

    int ans = (sizeof(arr) / sizeof(int));
    cout << ans << endl;

    cout << "Size before pushing : " << arr.size() << endl;
    cout << "Capacity before pushing : " << arr.capacity() << endl;

    // insert
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(9);

    cout << "Size after pushing : " << arr.size() << endl;
    cout << "Capacity after pushing : " << arr.capacity() << endl;

    // print
    cout << "Elements before popping : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // remove / delete
    arr.pop_back();

    // print
    cout << "Elements after popping : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}