// Given a matrix arr[][] of integers, print the prefix sum matrix for it.
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

    cout << "First Row wise" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i < size && j == 0)
            {
                cout << arr[i][j] << " ";
            }
            else
            {
                arr[i][j] += arr[i][j - 1];
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }

    cout << "Then column wise" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (j < size && i == 0)
            {
                cout << arr[i][j] << " ";
            }
            else
            {
                arr[i][j] += arr[i - 1][j];
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}