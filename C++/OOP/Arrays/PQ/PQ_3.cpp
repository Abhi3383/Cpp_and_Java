// search element in an array
#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int size, int n)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            cout << "Element found at " << i;
            break;
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {1, 9, 7, 4, 5};
    int n = 9;
    int size = sizeof(arr) / sizeof(arr[0]);
    search(arr, size, n);
    return 0;
}