#include <bits/stdc++.h>
using namespace std;

int main()
{
    int basic[3] = {1, 2, 3};

    // STL array
    array<int, 4> a = {1, 2, 3, 4};
    array<int, 4> ar = {6, 3, 7, 5};

    // to get element we can use get
    cout << "Using get() -> " << get<3>(a) << endl;
    // get<here a number will be provided, it must be constant>(a)
    // to use get we have to include tuple library
    // using get<constant>(object)

    cout << endl;

    // using operator[]
    for (int i = 0; i < a.size(); i++)
    {
        cout << "Number at " << i << "th index is " << a[i] << endl;
    }

    cout << endl;

    // if you need the index of 2nd element you need to the use the ".at"
    cout << "Element at 2nd index -> " << a.at(2) << endl;

    // to check if the array is empty(will return in boolean that is 0 or 1)
    cout << "Empty or not -> " << a.empty() << endl;

    // to find the first element we use the front
    cout << "First element -> " << a.front() << endl;

    // to find the last element we use the back
    cout << "Last element -> " << a.back() << endl;

    cout << endl;

    // using swap()
    // it will swap array of same size
    a.swap(ar);
    cout << "Array after swapping" << endl;

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < ar.size(); i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl
         << endl;

    // using fill()
    array<int, 7> arr;
    arr.fill(0);
    cout << "Using fill" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    // at ,empty ,front ,back all the complexity O(1)
    return 0;
}
