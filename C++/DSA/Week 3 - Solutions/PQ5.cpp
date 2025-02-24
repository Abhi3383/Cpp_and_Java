// GFG -> First repeating element

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int a[], int n)
    {
        // code here
        unordered_map<int, int> hash;
        for (int i = 0; i < n; i++)
        {
            hash[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (hash[a[i]] > 1)
                return i + 1;
        }
        return -1;
    }
};

int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    Solution ob;
    cout << ob.firstRepeated(arr, n) << "\n";

    return 0;
}
