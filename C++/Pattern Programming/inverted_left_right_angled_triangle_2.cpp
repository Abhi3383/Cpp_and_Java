#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 7;
    for (int i = 0; i <= n; i++)
    {
        int k = 1;
        for (int j = 0; j <= n; j++)
        {
            if (j >= i)
            {
                cout << k;
                k++;
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}