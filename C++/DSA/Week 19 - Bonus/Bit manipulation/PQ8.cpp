#include <bits/stdc++.h>
using namespace std;

void getSubsequences(string str)
{
    vector<string> ans;
    int n = str.length();

    for (int num = 0; num <= (1 << n) - 1; num++)
    {
        string temp = "";
        // we will create subsequence string in this temp string
        for (int i = 0; i < n; i++)
        {
            char ch = str[i];
            if (num & (1 << i))
            {
                // non-zero value k liye , include current character
                temp.push_back(ch);
            }
        }

        if (temp.length() >= 0)
        {
            // store in ans
            ans.push_back(temp);
        }
    }
    sort(ans.begin(), ans.end());
    cout << "Count of subsequences " << ans.size() << endl;
    cout << "printing the subsequences" << endl;
    for (auto i : ans)
    {
        cout << i << endl;
    }
}

int main()
{

    string str = "abc";
    cout << "Length :" << str.length() << endl;
    getSubsequences(str);

    return 0;
}
