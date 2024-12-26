// Missing elements from an array with duplicates

#include <bits/stdc++.h>
using namespace std;

// mapping array values with index
int findMissing1(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int idx = abs(a[i]);
        if (a[idx - 1] > 0)
            a[idx - 1] *= -1;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
            return i + 1;
    }
    return -1;
}

// Sorting + swapping method
int findMissing2(int a[], int n)
{
    int i = 0;
    while (i < n)
    {
        int idx = a[i] - 1;
        if (a[i] != a[idx])
        {
            swap(a[i], a[idx]);
        }
        else
        {
            ++i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != i + 1)
        {
            cout << i + 1 << " ";
        }
    }
    return -1;
}

int main()
{
    int n;
    int a[] = {1, 3, 5, 3, 4};
    n = sizeof(a) / sizeof(int);
    cout << findMissing1(a, n);

    return 0;
}