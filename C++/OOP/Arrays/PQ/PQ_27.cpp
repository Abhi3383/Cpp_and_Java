/*
- Given a vector arr[] sorted in increasing order of n size and an integer x, find the number
of unique pairs that exist in the array whose absolute sum is exactly x.
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int size, k;
    cin >> size >> k;
    vector<int> arr(size);
    int i = 0;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int left = 0, right = size - 1;
    int ind = arr.size() - 1;
    int ans = 0;
    while (left < right)
    {
        if (arr[left] + arr[right] == k)
        { // found elements just increase counter
            ans++;
            left++;
            right--;
        }
        else if (arr[left] + arr[right] > k)
            right--;
        else
            left++; // sum is small so increase the smaller element, i.e. ith element
    }
    cout << ans;
}