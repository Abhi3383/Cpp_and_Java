// Move all negative numbers to left side of an array

#include <bits/stdc++.h>
using namespace std;

void moveAllNegToLeft(int *a, int n)
{
    // Dutch national flag algo.
    int l = 0, h = n - 1;
    while (l < h)
    {
        if (a[l] < 0)
            l++;
        else if (a[h] > 0)
            h--;
        else
            swap(a[l], a[h]);
    }
}

int main()
{
    int a[] = {1, 2, -3, 4, -5, 6};
    int n = sizeof(a) / sizeof(int);
    moveAllNegToLeft(a, n);

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    

    return 0;
}