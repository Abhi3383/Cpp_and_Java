// Given a arr[] stored in increasing order of n size and an integer x,
// find if the number of unqiue pairs that exists in the array whose absolute sum is exactly x.

#include <bits/stdc++.h>
using namespace std;

void sortedSquareArray(int arr[], int x, int size)
{
    vector<int> ans;
    int left_ptr = 0;
    int right_ptr = size - 1;
    int count = 0;
    while (left_ptr <= right_ptr)
    {
        if (arr[left_ptr] + arr[right_ptr] == x)
        {
            count++;
            left_ptr++;
            right_ptr--;
        }
        else if (arr[left_ptr] + arr[right_ptr] < x)
        {
            left_ptr++;
        }
        else if (arr[left_ptr] + arr[right_ptr] > x)
        {
            right_ptr--;
        }
    }

    cout << count;
}

int main()
{

    int arr[] = {-2, -1, 0, 3, 4, 1, 3, 6, 8, 11, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 12;
    sortedSquareArray(arr, x, size);

    return 0;
}
