#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_multimap<string, int> m({{"Prateek", 100},
                                       {"Jatin", 200},
                                       {"fayaz", 300},
                                       {"fayaz", 400}});

    unordered_multimap<string, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << "Key = " << it->first << ", Value = " << it->second << endl;
    }

    return 0;
}