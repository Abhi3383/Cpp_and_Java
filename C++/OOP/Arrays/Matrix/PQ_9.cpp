// Given a 2D matrix with m rows and n columns containing integers. Print and return the row number with
// maximum sum in the array.
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
    int size = sizeof(arr) / sizeof(arr[0]);

    int m = -1;
    int maxSum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < size; j++)
        {
            arr[i][j] += arr[i][j - 1];
        }
        if (arr[i][size - 1] > maxSum)
        {
            maxSum = arr[i][size - 1];
            m = i;
        }
    }
    cout << "Row : " << m;
}