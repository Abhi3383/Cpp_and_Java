// Quick sort

#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int s, int e)
{
    // s1: choose pivotElement
    int pivotIdx = s;
    int pivotEle = arr[s];

    // s:2 find right pos for pivotEle and place it there
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivotEle)
        {
            count++;
        }
    }
    // jab mai loop sein bahar hua, toh mera pass pivot ki right position ka index ready hai
    int rightIdx = s + count;
    swap(arr[pivotIdx], arr[rightIdx]);
    pivotIdx = rightIdx;

    // s:3 left mai chote and right mai bade
    int i = s;
    int j = e;

    while (i < pivotIdx && j > pivotIdx)
    {
        while (arr[i] < pivotEle)
        {
            i++;
        }
        while (arr[j] > pivotEle)
        {
            j--;
        }
        // 2 case ho sakte hai
        // A-> you found the element to swap
        // yaani pivot element kein right side mai
        // koi chota element mil gya hon
        // B-> no need to swap
        if (i < pivotIdx && j > pivotIdx)
        {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIdx;
}

void quickSort(int *arr, int s, int e)
{
    if (s >= e)
        return;

    // partition logic, return pivotIndex
    int p = partition(arr, s, e);

    // recursive calls
    // pivotEle -> left
    quickSort(arr, s, p - 1);

    // right
    // pivotEle -> right
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[] = {8, 1, 3, 4, 20, 50, 3};
    int n = 7;

    int s = 0;
    int e = n - 1;

    quickSort(arr, s, e);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}