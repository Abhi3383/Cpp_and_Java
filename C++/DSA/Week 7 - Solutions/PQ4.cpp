// GFG -> Quick Sort by Lakshay bhaiya

#include <bits/stdc++.h>
using namespace std;
//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Function to sort an array using quick sort algorithm.
void quickSort(int a[], int start, int end)
{
    // code here
    if (start >= end)
        return;
    int pivot = end;
    int i = start - 1;
    int j = start;
    while (j < pivot)
    {
        if (a[i] < a[pivot])
        {
            ++i;
            swap(a[i], a[j]);
        }
        ++j;
    }
    ++i;
    swap(a[i], a[pivot]);
    quickSort(a, start, i - 1);
    quickSort(a, i + 1, end);
}

int main()
{
    return 0;
}