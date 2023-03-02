// Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists
// a pair in the array whose sum is exactly x.

#include <iostream>
#include <vector>
using namespace std;

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m] = {0};
    int i = 0, j = m - 1;
    // input
    for (i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + m);
    while (i < j)
    {
        if (arr[i] + arr[j] == n)
        {
            cout << "True";
            return 0;
        }
        else if (arr[i] + arr[j] > n)
            j--;
        else
            i++;
    }
    cout << "False";
}
