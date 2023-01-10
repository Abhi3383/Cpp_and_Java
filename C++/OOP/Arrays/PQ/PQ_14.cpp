// Sort an array consisting of only 0's and 1's.

#include <bits/stdc++.h>
using namespace std;

void sortZeroesAndOnes(vector<int> &v)
{
    int j = 0, i = 0;
    int k = v.size();
    while (j <= k)
    {
        if (v[j] == 0)
        {
            swap(v[j], v[i]);
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    sortZeroesAndOnes(v);

    return 0;
}