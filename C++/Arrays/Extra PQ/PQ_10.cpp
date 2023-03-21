// better approach of PQ_9

#include <bits/stdc++.h>
using namespace std;

int secondLargestElement(int arr[], int size)
{
    int max = INT_MIN;
    int secondMax = INT_MIN;

    // to find the maximum element
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // to find the second maximum
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }
    return secondMax;
}
int main()
{
    int arr[] = {2, 3, 5, 7, 6, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << secondLargestElement(arr, size);
}