#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // BAD Practice
    int arrd[n];

    // static array
    int arre[10000];

    cout << "Enter the input values in array " << endl;
    // taking input in array
    for (int i = 0; i < 10; i++)
    {
        cin >> arre[i];
    }

    // printing
    cout << "printing the values in array" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arre[i] << " ";
    }

    return 0;
}