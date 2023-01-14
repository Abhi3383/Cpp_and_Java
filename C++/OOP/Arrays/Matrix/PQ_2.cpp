// WAP to display transpose of matrix entered by the user.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r1 = 3, c1 = 3, r2 = 3, c2 = 3;
    int arr1[r1][c1] = {0};
    int transpose[r2][c2] = {0};

    // arr1 input
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> arr1[i][j];
        }
    }

    // arr1 values printing
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    // transpose operation
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            transpose[j][i] = arr1[i][j];
        }
        cout << endl;
    }

    // transposed values printing
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
}