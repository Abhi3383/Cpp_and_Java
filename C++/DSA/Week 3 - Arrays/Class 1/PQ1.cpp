#include <bits/stdc++.h>
using namespace std;

bool find(int arr[], int size, int key)
{

    // linear search

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return true;
    }

    // not present
    return false;
}

int main()
{
    int arr[5] = {1, 3, 5, 7, 8};
    int size = 5;

    cout << "Enter the key to find " << endl;
    int key;
    cin >> key;

    if (find(arr, size, key))
    {
        cout << "Found " << endl;
    }
    else
    {
        cout << "not Found " << endl;
    }

}