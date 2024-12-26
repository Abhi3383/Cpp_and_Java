// The difference between unordered and ordermap is
// unordered map returns in unsorted manner and map returns
// in ordered manner

// for which implementation is given below

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "thiruvananthapuram";

    map<char, int> freq;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        freq[ch]++;
    }

    for (auto i : freq)
    {
        cout << i.first << " : " << i.second << endl;
    }

    return 0;
}
