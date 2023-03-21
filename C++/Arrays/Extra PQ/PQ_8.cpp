// Find the given number in a given number where all the elements
// are being respected twice with one value being unique.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 3, 1, 3, 2, 4, 1};
    int size = 7;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = arr[j] = -1;
            }
        }
    }

    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            cout << arr[i];
        }
    }

    return 0;
}