#include <bits/stdc++.h>
using namespace std;

int getKthSmallestElement(int arr[], int n, int k)
{
    // create max heap
    int i;
    priority_queue<int> pq;
    for (i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }
    for (; i < n; i++)
    {
        if (pq.top() > arr[i])
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }

    int ans=pq.top();
    return ans;
}

int main()
{
    int arr[] = {10, 5, 20, 4, 15};
    int n = 5;
    int k = 1;
    int ans = getKthSmallestElement(arr, n, k);
    cout << ans;
    return 0;
}