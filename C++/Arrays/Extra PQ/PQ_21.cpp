// Given a vector arr[] sorted in increasing order of n size and an integer x,
// find if there exists a pair whose sum is exactly x.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {0, 1, 3, 8, 11, 12, 15, 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    int m = 4;

    int i = 0;
    int j = size - 1;
    bool found = false;
    while (i < j)
    {
        if (abs(arr[i] + arr[j]) == m)
        {
            found = true;
            break;
        }
        else if (abs(arr[i] + arr[j]) < m)
        {
            // sum is less than x, increase the sum
            i++;
        }
        else
        {
            // sum is more than x, decrese the sum
            j--;
        }
    }
    if (found == true)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}