// thinking from end to start

/*
      3     2       1
   ----------------------
 3 |  o   |      |      |
   | -|-  |      |      |
   ------------- --------
 2 |      |      |      |
   |      |      |      |
   ----------------------
 1 |      |      |  o   |
   |      |      | -|-  |
   ----------------------

*/

#include <bits/stdc++.h>
using namespace std;

int maze(int n, int m)
{
    int rightWays = 0;
    int downWays = 0;

    if (n == 1 && m == 1)
    {
        return 1;
    }

    if (n == 1)
    {
        // cannot go down
        // only right ways call
        rightWays += maze(n, m - 1);
    }
    if (m == 1)
    {
        // cannot go down
        // only down ways call
        downWays += maze(n - 1, m);
    }
    if (n > 1 && m > 1)
    {
        rightWays += maze(n, m - 1);
        downWays += maze(n - 1, m);
    }
    int totWays = rightWays + downWays;
    return totWays;
}
int main()
{
    int n; // no of rows
    int m; // no of columns
    cout << "Enter number of rows in the maze : ";
    cin >> n;
    cout << "Enter number of columns in the maze : ";
    cin >> m;
    int noOfWays = maze(n, m);
    cout << noOfWays;

    return 0;
}