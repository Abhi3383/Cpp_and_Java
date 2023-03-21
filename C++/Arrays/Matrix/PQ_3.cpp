// Given a boolean 2d array, where each row is sorted.
// Find the row with the maximum number of 1's.

#include <bits/stdc++.h>
using namespace std;

int maximumOnesRow(vector<vector<int>> &v)
{
    int maxOnes = INT_MIN;
    int maxOnesRow = -1;
    int columns = v[0].size();

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] == 1)
            {
                int numberOfOnes = columns - j;
                if (numberOfOnes > maxOnes)
                {
                    maxOnes = numberOfOnes;
                    maxOnesRow = i;
                }
                break;
            }
        }
    }
    return maxOnesRow;
}

int main()
{
    int m, n;
    cin >> m >> n;

    vector<vector<int>> vec(m, vector<int>(n));

    // inserting values
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> vec[i][j];
        }
    }

    // printing values
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    cout << maximumOnesRow(vec);

    return 0;
}