// thinking from starting to end

/*
      1     2       3
   ----------------------
 1 |  o   |      |      |
   | -|-  |      |      |
   ------------- --------
 2 |      |      |      |
   |      |      |      |
   ----------------------
 3 |      |      |  o   |
   |      |      | -|-  |
   ----------------------

*/
#include <bits/stdc++.h>
using namespace std;

// cr = current row , cc = current column
// ec = ending column , er = ending row

int maze(int cr, int cc, int er, int ec)
{
    int rightWays = 0;
    int downWays = 0;

    if (cr == er && cc == ec)
    {
        return 1;
    }

    if (cr == er)
    {
        // only right ways call
        rightWays += maze(cr, cc + 1, er, ec);
    }
    if (cc == ec)
    {
        // only down ways call
        downWays += maze(cr + 1, cc, er, ec);
    }
    if (cc < ec && cr < er)
    {
        rightWays += maze(cr, cc + 1, er, ec);
        downWays += maze(cr + 1, cc, er, ec);
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
    int noOfWays = maze(1, 1, n, m);
    cout << noOfWays;

    return 0;
}