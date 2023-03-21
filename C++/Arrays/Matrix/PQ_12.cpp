/*
Write a user defined function upper() which takes an integer square matrix as an input and
its size N and prints the upper half of the matrix.
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter number of rows : ";
    cin >> row;
    cout << "Enter number of columns :";
    cin >> col;
    int arr[row][col] = {0};
    cout << "Enter elements of the array :";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // operation
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j + 1 <= i)
            {
                cout << "  ";
            }
            else
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
}