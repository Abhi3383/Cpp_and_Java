// Given Q queries, chech if the given number is present in the array or not.
// Note : Value of all the elements in the array is less than 10 to the power 5.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    const int N = 1e5 + 10; // scientific notation for writing 10 raised to the power 5.

    vector<int> freq(N, 0);
    for (int i = 0; i < n; i++)
    {
        freq[v[i]]++;
    }

    cout << "Enter queries: ";
    int q;
    cin >> q;

    while (q--)
    {
        int queryElement;
        cin >> queryElement;
        cout << freq[queryElement] << endl;
    }
    return 0;
}