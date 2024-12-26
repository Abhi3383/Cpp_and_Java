// Write a program to display multipkication of
// 2 matrices entered by user.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r1 = 2, c1 = 2, r2 = 2, c2 = 2, r3 = 2, c3 = 2;
    int arr1[r1][c1] = {0};
    int arr2[r2][c2] = {0};
    int mul[r3][c3] = {0};

    // arr1 input
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> arr1[i][j];
        }
    }

    // arr2 input
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> arr2[i][j];
        }
    }
    cout << endl;

    if (c1 != c2)
    {
        cout << "not possible" << endl;
    }

    // arr1 values printing
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // arr2 values printing
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Multiplicating
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            int value = 0;
            for (int k = 0; k < r2; k++)
            {
                value += arr1[i][k] * arr2[k][j];
            }
            mul[i][j] = value;
        }
    }

    // Printing
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}