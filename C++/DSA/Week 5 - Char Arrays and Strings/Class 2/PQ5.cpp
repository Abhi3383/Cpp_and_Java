#include <bits/stdc++.h>
using namespace std;

string removeOccurrences(string s, string part)
{
    int pos = s.find(part);
    cout << pos << endl;
    while (pos != string::npos)
    {
        s.erase(pos, part.length());
        pos = s.find(part);
    }
    return s;
}

int main()
{
    string s = "daabcbaabcbc";
    string p = "abc";

    cout << removeOccurrences(s, p);

    return 0;
}