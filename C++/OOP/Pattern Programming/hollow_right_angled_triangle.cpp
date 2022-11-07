#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == 0 || i == j || i == 4)
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
}