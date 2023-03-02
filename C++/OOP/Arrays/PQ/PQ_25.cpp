/*
Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists
a pair in the array whose absolute difference is exactly x.
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int size, n;
    cin >> size >> n;
    int arr[size] = {0};
    int i = 0, j = size - 1;
    // input
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + size);
    int i = 0;
    int j = 1;
    while (i < size && j < size)
    {
        if ((arr[j] - arr[i]) == (n))
        {
            cout << "Yes";
        }
        else if ((arr[j] - arr[i]) < (n))
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    cout << "No";
}
