// Subsequence of a string

#include <bits/stdc++.h>
using namespace std;

void printSubseq(string str, string &output, int i, vector<string> &v)
{
    if (i >= str.length())
    {
        v.push_back(output);
        cout << output << endl;
        return;
    }

    // exclude
    printSubseq(str, output, i + 1, v);

    // include
    output.push_back(str[i]);
    printSubseq(str, output, i + 1, v);
    output.pop_back();

    // for include we can also write
    // printSubseq(str, output + str[i], i + 1, v);
}

int main()
{
    string str = "abc";
    string output = "";

    vector<string> v;
    int i = 0;
    printSubseq(str, output, i, v);

    cout << "Vector storage:" << endl;
    for (auto val : v)
    {
        cout << val << " ";
    }

    return 0;
}