#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b)
{
    return a > b;
}
bool mycmp(int a, int b)
{
    return a > b;
}

bool isValid(string word)
{
    vector<char> v{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (isalpha(word[i]))
        {
            cnt3++;
            char c = word[i];
            auto it = find(v.begin(), v.end(), c);
            if (it != v.end())
                cnt1++;
        }
        else if (isdigit(word[i] - '0'))
        {
            cnt2++;
        }
    }
    cout << cnt1 << " " << cnt2 << " " << cnt3;
    if (cnt2 > 0 && cnt1 > 0 && cnt3 >= 3)
        return true;
    else
        return false;
}
int main()
{
    // vector<pair<int, int>> p;
    // p.push_back({10, 20});
    // for (auto i : p)
    // {
    //     cout << i.first << " " << i.second;
    // }
    // cout << endl;
    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // cout << *v.begin() << "\n";
    // vector<int> sol = vector<int>(v.begin() + 0, v.begin() + 2);

    // for (auto i : sol)
    // {
    //     cout << i << " ";
    // }

    // int h = lower_bound(v.begin(), v.end(), 3) - v.begin();
    // cout << "\n"
    //      << h;

    // char hash[256] = {0};
    // hash['a']=' b';
    // for (int i = 0; i < 258; i++)
    // {
    //     cout << i << " " << hash[i] << endl;
    // }
    cout << isValid("234Adas");
    return 0;
}