// Spiral Matrix : Given an nxm matrix 'a', return all
//                 elements of the matrix in spiral order.
// yt video link : https://www.youtube-nocookie.com/embed/Yafdg4Ol1-Q?list=PLxgZQoSe9cg0df_GxVjz3DD_Gck5tMXAd&autoplay=1&iv_load_policy=3&loop=1&modestbranding=1&start=
/*
                        left -> right

                        left      right
    top                   _|_______|_       top
     ^            top -> |__|__|__|__|       |
     |                   |__|__|__|__|       | to
     |                   |__|__|__|__|       |
   bottom      bottom -> |__|__|__|__|      bottom

                        left <- right

*/

#include <bits/stdc++.h>
using namespace std;

void spiralOrder(vector<vector<int>> &matrix)
{
    int top = 0;
    int left = 0;
    // to get size of columns
    int right = matrix[0].size() - 1;
    // to get number/size of rows
    int bottom = matrix.size() - 1;

    int direction = 0;

    while (left <= right && top <= bottom)
    {
        // left -> right
        if (direction == 0)
        {
            for (int col = left; col <= right; col++)
            {
                cout << matrix[top][col] << " ";
            }
            top++;
        }
        // top -> bottom
        else if (direction == 1)
        {

            for (int row = top; row <= bottom; row++)
            {
                cout << matrix[row][right] << " ";
            }
            right--;
        }

        // right <- left
        else if (direction == 2)
        {

            for (int col = right; col >= left; col--)
            {
                cout << matrix[bottom][col] << " ";
            }
            bottom--;
        }

        // bootm -> top
        else
        {

            for (int row = bottom; row >= top; row--)
            {
                cout << matrix[row][left] << " ";
            }
            left++;
        }
        direction = (direction + 1) % 4; // 0,1,2,3
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    spiralOrder(matrix);

    cout << endl;

    return 0;
}