// GFG -> Allocate minimum number of pages

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find minimum number of pages.
    bool isPossibleSolution(int *a, int n, int m, int sol)
    {
        int pageSum = 0;
        int c = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > sol)
                return false;
            if (pageSum + a[i] > sol)
            {
                c++;
                pageSum = a[i];
                if (c > m)
                    return false;
            }
            else
            {
                pageSum += a[i];
            }
        }
        return true;
    }
    int findPages(int a[], int n, int m)
    {
        // code here
        if (m > n)
            return -1;
        int s = 0;
        int e = accumulate(a, a + n, 0);
        int ans = -1;

        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (isPossibleSolution(a, n, m, mid))
            {
                ans = mid;
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return ans;
    }
};

int main()
{

    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int m;
    cin >> m;
    Solution ob;
    cout << ob.findPages(A, n, m) << endl;

    return 0;
}
