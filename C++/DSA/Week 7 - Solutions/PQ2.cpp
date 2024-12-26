// Leetcode -> In place merge sort

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> arr, int start, int mid, int end)
{
    int totalLen = end - start + 1;
    int gap = (totalLen / 2) + (totalLen % 2);
    while (gap > 0)
    {
        int i = start, j = start + gap;
        while (j <= end)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
            i++, j++;

            gap = gap <= 1 ? 0 : (gap / 2) + (gap % 2);
        }
    }
}

void mergeSort(vector<int> arr, int start, int end)
{
    if (start >= end)
        return;
    int mid = (start + end) >> 1;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

int main()
{

    return 0;
}