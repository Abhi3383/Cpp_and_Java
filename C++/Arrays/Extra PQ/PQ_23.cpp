// Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the
// two arrays into a single sorted array of size m+n.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int arr1[m] = {0};
    int arr2[n] = {0};

    int i = 0, j = 0;

    for (i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }

    for (i = 0; i < m; i++)
    {
        cout << arr1[i] << " ";
    }

    cout << endl;
    for (j = 0; j < n; j++)
    {
        cin >> arr2[j];
    }

    for (j = 0; j < n; j++)
    {
        cout << arr2[j] << " ";
    }
    int k = 0;

    int *arr3 = new int[m + n];

    i = 0;
    j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < m)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < n)
    {
        arr3[k++] = arr2[j++];
    }
    cout << endl;
    for (i = 0; i < m + n; i++)
    {
        cout << arr3[i] << " ";
    }
}