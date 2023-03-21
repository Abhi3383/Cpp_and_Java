// Another method of PQ_7
// Explanation Method 3: We add the value of each element in the given range from l1 to l2 and from r1 to r2.
// Now we even try to optimize the previous method by creating a prefix sum of both row and column in the
// same matrix. This can be precalculated as horizontal prefix sum for every particular row and vertical prefix
// sum for columns. Now we can calculate the final answer without using any for loop as we have pre
// calculated the prefix matrix.

#include <iostream>
#include <vector>
using namespace std;
int solve(vector<vector<int>> a, int l1, int l2, int r1, int r2)
{
    int n = a.size(), m = a[0].size();
    // convert the first row into prefix vector
    for (int j = 1; j < m; j++)
    {
        a[0][j] += a[0][j - 1];
    }
    // convert the first col into prefix vector
    for (int i = 1; i < n; i++)
    {
        a[i][0] += a[i - 1][0];
    }
    // convert the matrix into prefix matrix
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
        }
    }
    int full = a[r2][l2];
    int top = (l1 >= 1 ? a[l1 - 1][r1] : 0);
    int left = (r1 >= 1 ? a[l2][r1 - 1] : 0);
    int double_subtracted = (l1 >= 1 && r1 >= 1 ? a[l1 - 1][r1 - 1] : 0);
    int ans = full - top - left + double_subtracted;
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