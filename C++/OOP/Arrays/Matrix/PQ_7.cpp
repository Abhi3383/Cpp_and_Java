// Given a matrix ‘a’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
// rectangle from(l1, r1) to(l2, r2).

// Explanation Method 2: We add the value of each element in the given range from l1 to l2 and from r1 to r2.
// Rather than using the standard brute force approach we try to optimize it and pre-calculate the horizontal
// sum for each row in the matrix. This can be stored in the same matrix. Now we can traverse only the rows
// through a single for loop rather than using a nested for loop as we have a precalculated prefix matrix and
// calculate the answer using prefix sum technique.

#include <iostream>
#include <vector>
using namespace std;
int solve(vector<vector<int>> a, int l1, int l2, int r1, int r2)
{
    // convert each row of the matrix into prefix-sum vector
    int n = a.size(), m = a[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            a[i][j] += a[i][j - 1];
        }
    }
    int ans = 0;
    for (int i = l1; i <= l2; i++)
    {
        ans += a[i][r2] - (r1 >= 1 ? a[i][r1 - 1] : 0);
    }
    return ans;
}
int main()
{
    int row, col, l1, l2, r1, r2;
    cout << "Enter number of rows : ";
    cin >> row;
    cout << "Enter number of columns :";
    cin >> col;
    cout << "Enter the edges for which you want the prefix sum (in order l1,l2,r1,r2): ";
    cin >> l1 >> l2 >> r1 >> r2;
    vector<vector<int>> arr(row, vector<int>(col));
    cout << "Enter elements of the array :";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "value is : " << solve(arr, l1, l2, r1, r2) << endl;
}