/*

 * * * * * * *
  * * * * * * *
   * * * * * * *
    * * * * * * *
     * * * * * * *
      * * * * * * *

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 7;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = n; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}