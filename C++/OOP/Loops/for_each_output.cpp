#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int size = sizeof(arr) / sizeof(arr[0]);

    for (auto element : arr)
    {
        cout << element << " ";
    }
    return 0;
}