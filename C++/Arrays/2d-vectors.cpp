/*

vector <data_type> vec_name; -> 1-d vector

vector <vector <data_type>> vec_name; -> multi-d vector
eg : vector<int> v1 = {1,2,3};
     vector<int> v2 = {4,5};
     vector<int> v3 = {6,7};

vector <vector <int>> v = {v1, v2, v3};

         ___________
     v1 |__|__|__|__|
         _____
     v2 |__|__|
         _____
     v3 |__|__|


             V
    _____________________
    |      ___________  |
    |  v1 |__|__|__|__| |
    |      _____        |
    |  v2 |__|__|       |
    |      _____        |
    |  v3 |__|__|       |
    |___________________|

--> vector<vector<int>> V(n , vector<int>(m));
                          ^     ^
                          |     |
                        rows  columns

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    // first way
    vector<vector<int>> V(n, vector<int>(m));

    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5};
    vector<int> v3 = {6, 7};

    // second way
    vector<vector<int>> v = {v1, v2, v3};

    // to insert values
    // from V.size() we will get number of rows
    for (int i = 0; i < V.size(); i++)
    {
        // size of the particular row
        // for eg : size of V[1] row in the vector V
        for (int j = 0; j < V[i].size(); i++)
        {
            cin >> V[i][j];
        }
    }

    return 0;
}