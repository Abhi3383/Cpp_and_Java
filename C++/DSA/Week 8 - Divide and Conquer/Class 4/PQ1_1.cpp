// N queens problem

#include <bits/stdc++.h>
using namespace std;

void storeSolution(vector<vector<char>> &board, int n, vector<vector<string>> &ans)
{
    vector<string> temp;
    for (int i = 0; i < n; i++)
    {
        string output = "";
        for (int j = 0; j < n; j++)
        {
            output.push_back(board[i][j]);
        }
        temp.push_back(output);
    }
    ans.push_back(temp);
}

bool isSafe(int row, int col, vector<vector<char>> &board, int n)
{

    // check karna chahte h, k kya main
    // current cell[row, col] pr QUEEN rakh
    // sakta hu ya nahi 
    int i = row;
    int j = col;

    // check row
    while (j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        j--;
    }

    // check upper left diaglnol
    i = row;
    j = col;
    while (i >= 0 && j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        i--;
        j--;
    }

    // check bottom left diagnol
    i = row;
    j = col;
    while (i < n && j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        i++;
        j--;
    }

    // kahin pr bhi queen nahi mili
    // iska matlab ye position safe hai
    // iska matlab eturn kardo true
    return true;
}

void solve(vector<vector<char>> &board, int col, int n, vector<vector<string>> &ans)
{
    // base case
    if (col >= n)
    {
        storeSolution(board, n, ans);
        return;
    }

    // 1 case solve karna h , baaki recursion sambhal lega

    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            // rakh do
            board[row][col] = 'Q';

            // recursion solution laega
            solve(board, col + 1, n, ans);
            // backtracking
            board[row][col] = '.';
        }
    }
}

int main()
{
    int n = 4;
    vector<vector<char>> board(n, vector<char>(n, '.'));
    vector<vector<string>> ans;
    int col = 0;
    // 0 -> empty cell
    // 1 -> Queen at the cell
    solve(board, col, n, ans);

    // Print the solutions
    for (const auto &solution : ans)
    {
        for (const string &row : solution)
        {
            cout << row << endl;
        }
        cout << "----------" << endl;
    }

    return 0;
}
