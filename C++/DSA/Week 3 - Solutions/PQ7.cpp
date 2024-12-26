// Waveprint matrix

#include <bits/stdc++.h>
using namespace std;

void wavePrintMatrix(vector<vector<int>> v)
{
    int m = v.size();
    int n = v[0].size();
    for (int startCol = 0; startCol < n; startCol++)
    {
        // even number of column -> Top to Bottom
        if ((startCol & 1) == 0)
        {
            for (int i = 0; i < m; i++)
            {
                cout << v[i][startCol] << " ";
            }
        }
        else
        {
            for (int i = m - 1; i >= 0; i--)
            {
                cout << v[i][startCol] << " ";
            }
        }
    }
}

int main()
{
    vector<vector<int>> v{
        {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
    for (auto i : v)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    wavePrintMatrix(v);
}