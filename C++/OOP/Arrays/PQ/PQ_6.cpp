// Target Sum - Find the total number of pairs in the Array whose sum is equal to the given value x.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {3, 4, 6, 7, 1};
    int targetSum = 7;

    int size = sizeof(arr) / sizeof(arr[0]);

    int pairs = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == targetSum)
            {
                pairs++;
            }
        }
    }
    cout << pairs << endl;
}