#include <bits/stdc++.h>
using namespace std;

void solve(vector<string> &ans, int index, string output, string digits, vector<string> &mapping)
{
    // base case
    if (index >= digits.length())
    {
        ans.push_back(output);
        return;
    }

    char digitCharacter = digits[index];
    int digitInteger = digitCharacter - '0';

    string value = mapping[digitInteger];

    for (int i = 0; i < value.length(); i++)
    {
        solve(ans, index + 1, output+value[i], digits, mapping);
    }
}

int main()
{
    string digits = "23";
    vector<string> ans;

    if (digits.size() == 0)
    {
        for (const string &str : ans)
        {
            cout << str << endl;
        }
    }

    int index = 0;
    string output = "";
    vector<string> mapping(10);
    mapping[2] = "abc";
    mapping[3] = "def";
    mapping[4] = "ghi";
    mapping[5] = "jkl";
    mapping[6] = "mno";
    mapping[7] = "pqrs";
    mapping[8] = "tuv";
    mapping[9] = "wxyz";

    solve(ans, index, output, digits, mapping);
    for ( string str : ans)
    {
        cout << str << endl;
    }
    return 0;
}