// Unbounded Search -> Find an element in infinte sorted array

#include <bits/stdc++.h>
using namespace std;

int bs(int *a, int s, int e, int x)
{
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (a[mid] == x)
            return mid;
        else if (x > a[mid])
            s = mid + 1;
        else
            e = mid - 1;
    }
    return -1;
}
int expSearch(int *a, int n, int x)
{
    if (a[0] == x)
        return 0;
    int i = 0, j = 1;
    while (a[j] < x)
    {
        cout << "before"
             << " " << i << " " << j << "\n";
        i = j;
        j *= 2;
        cout << "after"
             << " " << i << " " << j << "\n";
    }
    return bs(a, i, j, x);
}

int main()
{
    int a[] = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int n = sizeof(a) / sizeof(int);
    int x = 56;
    int ans = expSearch(a, n, x);
    cout << ans;
    return 0;
}