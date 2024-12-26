#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int size = sizeof(arr) / sizeof(arr[0]);

    int i = 0;
    while (i < size)
    {
        cout << arr[i] << " ";
        i++;
    }

    return 0;
}