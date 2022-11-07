#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    m["babbar"] = 100;
    m["kumar"] = 200;
    m["love"] = 300;

    unordered_map<string, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << "Key = " << it->first << ", Value = " << it->second << endl;
    }

    return 0;
}