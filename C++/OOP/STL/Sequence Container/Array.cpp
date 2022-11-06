#include <bits/stdc++.h>
using namespace std;

int main()
{
    int basic[3] = {1, 2, 3};
    // STL array
    array<int, 4> a = {1, 2, 3, 4};
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
    // if you need the index of 2nd element you need to the use the ".at"
    cout << "Element at 2nd index -> " << a.at(2) << endl;
    // to check if the array is empty(will return in boolean that is 0 or 1)
    cout << "Empty or not -> " << a.empty() << endl;
    // to find the first element we use the front
    cout << "First element -> " << a.front() << endl;
    // to find the last element we use the back
    cout << "Last element -> " << a.back() << endl;

    // at ,empty ,front ,back all the complexity O(1)
    return 0;
}
