// Find the min element

#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n, int i, int &mini)
{
    if (i >= n)
        return;

    mini = min(mini, (arr[i]));
    print(arr, n, i + 1, mini);
}

int main()
{
    int arr[] = {30, 20, 70, 40, 50, 10};
    int n = 6;
    int i = 0;
    int mini = INT_MAX;

    print(arr, n, i, mini);
    cout << "Min element is:" << mini;

    return 0;
}