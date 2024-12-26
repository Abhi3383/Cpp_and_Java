#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define vi vector<int>

signed main()
{
    vi v{2, 3, 1, 5};

    for (int i = 0; i < v.size(); i++)
    {
        if ( v[i+1] - v[i] != 1)
        {
            cout<<v[i]+1;
            break;
        }
        
    }
}