// Find the last occurence of an element x in a given array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(6);
    for (int &i : v)
    {
        cin >> i;
    }
    cout << "Enter x : ";
    int x;
    cin >> x;

    int occurenece = -1;
    for (size_t i = v.size(); i >= 0; i--)
    {
        if (v[i] == x)
        {
            occurenece = i;
            break;
        }
    }
    cout << occurenece;

    return 0;
}