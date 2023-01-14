// Spiral Matrix : Given an nxm matrix 'a', return all
//                 elements of the matrix in spiral order.
//                 Also. filled with elements from 1 to n^2 in spiral order.

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> createSpiralMatrix(int n)
{
    vector<vector<int>> matrix(n, vector<int>(n));

    int top = 0;
    int left = 0;
    // to get size of columns
    int right = n - 1;
    // to get number/size of rows
    int bottom = n - 1;

    int direction = 0;
    int value = 1;

    while (left <= right && top <= bottom)
    {
        // left -> right
        if (direction == 0)
        {
            for (int col = left; col <= right; col++)
            {
                matrix[top][col] = value++;
            }
            top++;
        }
        // top -> bottom
        else if (direction == 1)
        {

            for (int row = top; row <= bottom; row++)
            {
                matrix[row][right] = value++;
            }
            right--;
        }

        // right <- left
        else if (direction == 2)
        {

            for (int col = right; col >= left; col--)
            {
                matrix[bottom][col] = value++;
            }
            bottom--;
        }

        // bootm -> top
        else
        {

            for (int row = bottom; row >= top; row--)
            {
                matrix[row][left] = value++;
            }
            left++;
        }
        direction = (direction + 1) % 4; // 0,1,2,3
    }
    return matrix;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    matrix = createSpiralMatrix(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
