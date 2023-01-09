// Find the second largest elemement in the givwn array

// Apporach -> First we will find the largest element and then update its value with -1.
//          -> No we will traverse the array again and then when we will traverse then we will find the second largest element.

#include <bits/stdc++.h>
using namespace std;

int largestElementIndex(int arr[], int size)
{
    int max = INT_MIN;
    int maxIndex = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main()
{
    int arr[] = {2, 3, 5, 7, 6, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int indexOfLargest = largestElementIndex(arr, size);
    cout << arr[indexOfLargest] << endl;

    // storing largestElement
    int largestElement = arr[indexOfLargest];
    // setting the all the largest values =-1 to counter duplicates
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == largestElement)
        {
            arr[i] = -1;
        }
    }

    int indexOfSecondLargest = largestElementIndex(arr, size);
    cout << arr[indexOfSecondLargest] << endl;
}