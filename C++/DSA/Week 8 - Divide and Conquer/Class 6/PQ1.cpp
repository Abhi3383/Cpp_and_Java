#include <iostream>
#include <vector>

using namespace std;

void print(vector<vector<int>> arr)
{
    for (auto i : arr)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
}

bool isSafe(int row, int col, vector<vector<int>> &board, char value)
{
    int n = board.size();

    for (int i = 0; i < n; i++)
    {
        // row check
        if (board[row][i] == value)
            return false;

        // col check
        if (board[i][col] == value)
            return false;

        // 3*3 box check
        if (board[3 * (row / 3) + (i / 3)][3 * (col / 3) + (i % 3)] == value)
            return false;
    }

    return true;
}

bool solve(vector<vector<int>> &board)
{
    int n = board.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // check for empty cell
            if (board[i][j] == 0)
            {
                // try to fill with values ranging from 1 to 9
                for (int val = 1; val <= 9; val++)
                {
                    // check for safety
                    if (isSafe(i, j, board, val))
                    {
                        // insert
                        board[i][j] = val;
                        // recursion sambal lega
                        bool remainingBoardSolution = solve(board);
                        if (remainingBoardSolution == true)
                        {
                            return true;
                        }
                        else
                        {
                            // backtrack
                            board[i][j] = 0;
                        }
                    }
                }
                // if 1 se 9 tak koi bhi value se solution
                // nahi nikla ,current cell pr,
                // that means piche kahin pr galti h ,
                // go back by returning false
                return false;
            }
        }
    }
    // all cells filled
    return true;
}

int main()
{
    vector<vector<int>> grid = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                                {5, 2, 0, 0, 0, 0, 0, 0, 0},
                                {0, 8, 7, 0, 0, 0, 0, 3, 1},
                                {0, 0, 3, 0, 1, 0, 0, 8, 0},
                                {9, 0, 0, 8, 6, 3, 0, 0, 5},
                                {0, 5, 0, 0, 9, 0, 6, 0, 0},
                                {1, 3, 0, 0, 0, 0, 2, 5, 0},
                                {0, 0, 0, 0, 0, 0, 0, 7, 4},
                                {0, 0, 5, 2, 0, 6, 3, 0, 0}};

    if (solve(grid))
        print(grid);
    else
        cout << "no solution  exists " << endl;

    return 0;
}