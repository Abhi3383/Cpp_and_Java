// Find key using recursion

#include <bits/stdc++.h>
using namespace std;

bool checkKey(string str, int n, int i, char key, vector<int> &sol)
{
    if (i >= n)
        return false;

    if (str[i] == key)
    {
        sol.push_back(i);
    }

    return checkKey(str, n, i + 1, key, sol);
}

int main()
{
    string str = "lovababbar";
    int n = str.length();
    int i = 0;

    vector<int> sol;

    char key = 'b';
    checkKey(str, n, i, key, sol);
    for (auto i : sol)
    {
        cout<<"Found at : "<<i<<endl;
    }
    

    return 0;
}
