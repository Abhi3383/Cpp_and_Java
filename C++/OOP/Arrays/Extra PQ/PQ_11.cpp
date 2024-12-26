// Rotate the given array 'a' by k steps, where k is non-negative.
// Note : k can be greater than n as well where n is the size of array 'a'.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int k = 2;

    k = k % size;

    int ansArr[size];
    int j = 0;

    // inserting last k elements in ans Array.
    for (int i = size - k; i < size; i++)
    {
        ansArr[j++] = arr[i];
    }

    // inserting first n-k elements in ans array
    for (int i = 0; i <= k; i++)
    {
        ansArr[j++] = arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << ansArr[i] << " ";
    }
    cout << endl;
}