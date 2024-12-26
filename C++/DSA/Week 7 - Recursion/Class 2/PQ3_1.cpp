// Find the max element

#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n, int i, int &maxi)
{
    if (i >= n)
        return;

    if (arr[i] > maxi)
    {
        maxi = (arr[i]);
    }
    print(arr, n, i + 1, maxi);
}

int main()
{
    int arr[] = {30, 20, 70, 40, 50, 10};
    int n = 6;
    int i = 0;
    int maxi = INT_MIN;

    print(arr, n, i, maxi);
    cout << "Max element is:" << maxi;

    return 0;
}