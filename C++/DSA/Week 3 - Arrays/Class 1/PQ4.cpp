#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[9] = {10, 20, 30, 40, 45, 50, 60, 70, 80};
    int size = 9;

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {

        if (start == end)
        {
            cout << arr[start] << " ";
        }
        else
        {
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }

        start++;
        end--;
    }
}