// max element of an array
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1, 9, 7, 4, 5};

    int size = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}