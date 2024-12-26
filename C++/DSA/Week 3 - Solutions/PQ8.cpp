// Leetcode -> Sprial Print of a matrix

#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int m = matrix.size();
    int n = matrix[0].size();
    int totalEle = m * n;

    int startingRow = 0;
    int endingCol = n - 1;
    int endingRow = m - 1;
    int startingCol = 0;

    int cnt = 0;
    while (cnt < totalEle)
    {
        // print starting row
        for (int i = startingCol; i <= endingCol && cnt < totalEle; i++)
        {
            ans.push_back(matrix[startingRow][i]);
            cnt++;
        }
        startingRow++;
        // print ending col
        for (int i = startingRow; i <= endingRow && cnt < totalEle; i++)
        {
            ans.push_back(matrix[i][endingCol]);
            cnt++;
        }
        endingCol--;
        // print ending row
        for (int i = endingCol; i >= startingCol && cnt < totalEle; i--)
        {
            ans.push_back(matrix[endingRow][i]);
            cnt++;
        }
        endingRow--;
        // print starting col
        for (int i = endingRow; i >= startingRow && cnt < totalEle; i--)
        {
            ans.push_back(matrix[i][startingCol]);
            cnt++;
        }
        startingCol++;
    }
    return ans;
}

int main()
{
    vector<vector<int>> v{
        {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
    vector<int> ans = spiralOrder(v);
    for (auto i : ans)
    {
        cout << i << " ";
    }
}
