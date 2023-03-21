#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string> s;
    s.insert("Prateek");
    s.insert("Jain");
    s.insert("Pankaj");
    s.insert("Ankit");

    unordered_set<string>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    string key = "prateek";
    if (s.find(key) == s.end())
    {
        cout << "key not found" << endl;
    }
    else
        cout << "key found" << endl;
    return 0;
}