// GFG -> Add 2 numbers presented by 2 arrays

#include <bits/stdc++.h>
using namespace std;

string calc_Sum(int *a, int n, int *b, int m)
{
    // Complete the function
    int car = 0;
    string ans;
    int i = n - 1;
    int j = m - 1;

    while (i >= 0 && j >= 0)
    {
        int x = a[i] + b[j] + car;
        int digit = x % 10;
        ans.push_back(digit + '0');
        car = x / 10;
        i--, j--;
    }
    while (i >= 0)
    {
        int x = a[i] + car;
        int digit = x % 10;
        ans.push_back(digit + '0');
        car = x / 10;
        i--;
    }
    while (j >= 0)
    {
        int x = b[j] + car;
        int digit = x % 10;
        ans.push_back(digit + '0');
        car = x / 10;
        j--;
    }

    if (car)
    {
        ans.push_back(car + '0');
    }
    while (ans[ans.size() - 1] == '0')
        ans.pop_back();
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
    int n;
    cout << "Size of first array :";
    cin >> n;
    cout << "Enter the elements for first array :";
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cout << "Size of second array :";
    cin >> m;
    cout << "Enter the elements for second array :";
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    cout << calc_Sum(a, n, b, m) << endl;

    return 0;
}