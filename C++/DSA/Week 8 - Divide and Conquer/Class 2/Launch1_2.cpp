// more concise form of Quick Sort
// by CoderArmy
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pos = start;
    for (int i = start; i <= end; i++)
    {
        // here arr[end] is out pivotElement
        if (arr[i] <= arr[end])
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    return pos-1;
}

void quickSort(int arr[], int s, int e)
{
    while (s >= e)
        return;

    int p = partition(arr, s, e);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main()
{

    int arr[] = {8, 1, 3, 4, 20, 50, 5, 1, 2, 2, 2, 50, 30};
    int n = 13;

    int s = 0;
    int e = n - 1;
    quickSort(arr, s, e);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}