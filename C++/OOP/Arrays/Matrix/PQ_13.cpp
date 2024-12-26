/*
- A square matrix is said to be an perfect Matrix if both of the following conditions hold:
a) All the elements in the diagonals of the matrix are non-zero integers.
b) All other elements except the diagonal elements are 0.
Given a 2D integer array grid of size n x n representing a square matrix, return true if grid
is a perfect matrix. Otherwise, return false using functions.

Sample Input: [[1,0,0,1],[0,2,1,0],[0,1,2,0],[3,0,0,1]]
Sample Output: true
Sample Input: [[5,7,0],[0,3,1],[0,5,0]]
Sample Output: false
*/

#include <bits/stdc++.h>
using namespace std;
bool helper(vector<vector<int>> grid)
{
    int n = grid.size(); // gives total number of elements in a row -> Number of elemets not number of index
                         // ________________
                         //  |_1_|_2_|_3_|_4_|
                         //    0   1   2   3
                         // so it will give n=4
    int m = grid[0].size();

    for (int i = 0; i < n; i++)
    {
        if (grid[i][i] == 0)
        {
            return false;
        }
        if (grid[i][n - i - 1] == 0)
        {
            return false;
        }
        grid[i][i] = -1;
        grid[i][n - i - 1] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] != -1 && grid[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}
int main()

{
    int r;
    int c;
    cout << "Enter the row and column size : ";
    cin >> r >> c;
    vector<vector<int>> arr(r, vector<int>(c));
    cout << "Enter the matrix elements : " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    int val = helper(arr);
    if (val)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}