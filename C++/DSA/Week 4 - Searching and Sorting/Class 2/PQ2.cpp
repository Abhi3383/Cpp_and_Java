#include <bits/stdc++.h>
using namespace std;

int findSqrt(int n)
{
    int target = n;
    int s = 0;
    int e = n;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (mid * mid == target)
            return mid;
        if (mid * mid > target)
            e = mid - 1;
        else
        {
            ans = mid;
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int ans = findSqrt(n);
    cout << "Ans is : " << ans << endl;

    int precision;
    cout << "Enter the number of floating digits in precison : ";
    cin >> precision;

    double step = 0.1;
    double finalAns = ans;

    for (int i = 0; i < precision; i++)
    {
        for (double j = finalAns; j * j <= n; j += step)
        {
            finalAns = j;
        }
        step = step / 10;
    }
    cout << "Final Ans is : " << finalAns << endl;

    return 0;
}