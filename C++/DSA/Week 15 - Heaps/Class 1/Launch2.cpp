// Heapify

#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int index = i;
    int leftIdx = 2 * i;
    int rightIdx = 2 * i + 1;
    int largest = index;

    if (leftIdx <= n && arr[largest] < arr[leftIdx])
    {
        largest = leftIdx;
    }
    if (rightIdx <= n && arr[largest] < arr[rightIdx])
    {
        largest = rightIdx;
    }

    if (index != largest)
    {
        // left ya right child me sein koi bada ya greater
        // hogya hai currentNode sein
        swap(arr[largest], arr[index]);
        index = largest;
        heapify(arr, n, index);
    }
    // even if we dont write the below else and stmt
    // then as soon as index=larget is found it will
    // automatically return
    else
    {
        return;
    }
}

void buildHeap(int arr[], int n)
{
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
}

int main()
{
    int arr[] = {-1, 12, 15, 13, 11, 14};
    int n = 5;
    buildHeap(arr, n);
    cout << "Printing the heap:" << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}