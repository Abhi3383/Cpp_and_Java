#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;

    if (binary_search(arr, arr + size, 7))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found. " << endl;
    }
    vector<int> vec{1, 2, 3, 4, 5, 6};

    if (binary_search(vec.begin(), vec.end(), 6))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found. " << endl;
    }
    return 0;
}