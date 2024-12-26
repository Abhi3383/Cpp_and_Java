#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 2, 4, 5, 7};

    int size = 19;

    int numZero = 0;
    int numOne = 0;

    for (int i = 0; i < size; i++)
    {
        // if zero found, increment numZero
        if (arr[i] == 0)
        {
            numZero++;
        }
        // if One found, increment numOne
        if (arr[i] == 1)
        {
            numOne++;
        }
    }

    cout << "number of zeroes " << numZero << endl;
    cout << "number of ones " << numOne << endl;
}