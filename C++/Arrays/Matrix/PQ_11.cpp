// You are given an m x n integer matrix grid. Here m>=3 and n>=3
// We define an hourglass as a part of the matrix with the following shape:

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

    // input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    // printing
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int sum = 0;
    // operation
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 && j < col - 1 || i == 2 && j < col - 1)
            {
                sum += arr[i][j];
            }
            if (i == 1 && j == 1)
            {
                sum += arr[i][j];
            }
        }
    }

    cout << sum;

    return 0;
}