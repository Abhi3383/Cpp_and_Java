#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 7;
    for (int i = 0; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 0; j <= n; j++)
        {
            if (j >= i)
            {
                cout << ch;
                ch++;
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}