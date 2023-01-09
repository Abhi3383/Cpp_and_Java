// Count the number of strictly greater than value x.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(6);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    cout << "Enter x : ";
    int x;
    cin >> x;

    int count = 0;
    for (size_t i = 0; i < v.size(); i++)
    {
        if (v[i] > x)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}