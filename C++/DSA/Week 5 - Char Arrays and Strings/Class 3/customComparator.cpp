#include <bits/stdc++.h>
using namespace std;

bool cmp(char a, char b)
{
    return a > b; // in reverse/descending order
}
bool compare(string a, string b)
{
    return a > b; // in reverse/descending order
}

int main()
{
    string s = "babbar";
    sort(s.begin(), s.end(), cmp);
    cout << s << endl;

    vector<int> v{5, 3, 1, 2, 4};
    sort(v.begin(), v.end(), cmp);
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    
    vector<string> str{"love", "babbar", "rahul", "sandeep"};
    sort(str.begin(), str.end(), compare);
    for (auto i : str)
    {
        cout << i << " ";
    }

    return 0;
}