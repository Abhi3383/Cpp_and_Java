//  getKthGreatestElement

#include <bits/stdc++.h>
using namespace std;

int getKthGreatestElement(int arr[], int n, int k)
{
    // create min heap
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }
    for (int i =k; i < n; i++)
    {
        int element=arr[i];
        if (pq.top() < element)
        {
            pq.pop();
            pq.push(element);
        }
    }

    int ans = pq.top();
    return ans;
}

int main()
{
    int arr[] = {10, 5, 20, 4, 15};
    int n = 5;
    int k = 5 ;
    int ans = getKthGreatestElement(arr, n, k);
    cout << ans;
    return 0;
}