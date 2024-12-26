// Merge sort

#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    // create an dynamic array of len1,len2
    int *left = new int[len1]; // we can also created int left[len1];
    int *right = new int[len2];

    // copy values
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k++];
    }

    int leftIdx = 0;
    int rightIdx = 0;
    int mainArrayIdx = s;
    while (leftIdx < len1 && rightIdx < len2)
    {
        if (left[leftIdx] < right[rightIdx])
        {
            arr[mainArrayIdx++] = left[leftIdx++];
        }
        else
        {
            arr[mainArrayIdx++] = right[rightIdx++];
        }
    }

    while (leftIdx < len1)
    {
        arr[mainArrayIdx++] = left[leftIdx++];
    }
    while (rightIdx < len2)
    {
        arr[mainArrayIdx++] = right[rightIdx++];
    }
}

void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
        return;

    int mid = s + (e - s) / 2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main()
{
    int arr[] = {4, 5, 13, 2, 12};
    int n = 5;

    int s = 0;
    int e = n - 1;

    mergeSort(arr, s, e);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}