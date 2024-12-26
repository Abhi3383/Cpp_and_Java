#include <bits/stdc++.h>
using namespace std;
// Find the min element

#include <bits/stdc++.h>
using namespace std;

int print(int arr[], int n, int i, int &maxi)
{
    if (i >= n)
        return 0;

    if (arr[i] > maxi)
    {
        maxi = (arr[i]);
    }
    print(arr, n, i + 1, maxi);
    return maxi;
}

int main()
{
    int arr[] = {30, 20, 70, 40, 50, 10};
    int n = 6;
    int i = 0;
    int maxi = INT_MIN;

    cout << print(arr, n, i, maxi);

    return 0;
}