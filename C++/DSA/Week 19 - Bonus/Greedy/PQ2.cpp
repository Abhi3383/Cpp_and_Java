#include <bits/stdc++.h>
using namespace std;

int main()
{
    int prices[] = {2, 8, 6, 9, 4, 7};
    int n = 6;

    // algo starts here
    sort(prices, prices + n);
    for (int i = 0; i < n; i++)
    {
        cout << prices[i] << " ";
    }

    int amt = 0;
    int buy = 0;
    int free = n - 1;

    while (buy <= free)
    {
        amt += prices[buy];
        buy++;
        free--;
        free--;
    }
    cout << "\nasnwer is " << amt << endl;
    return 0;
}
