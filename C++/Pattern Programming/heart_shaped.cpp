#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 19; j++)
        {
            if ((j >= 2 - i) && (j <= 6 + i) || (j >= 12 - i) && (j <= 16 + i))
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 19; j++)
        {
            if (i == 0 && j == 6)
            {
                cout << "I love CODING";
            }
            if (i == 0 && j >= 6 && j <= 12)
            {
                continue;
            }

            if ((j >= i) && (j <= 18 - i))
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}