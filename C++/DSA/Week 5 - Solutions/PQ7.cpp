// Leetcode -> Group anagrams

#include <bits/stdc++.h>
using namespace std;

std::array<int, 256> has(string s)
{
    std::array<int, 256> hash = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }
    return hash;
}
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    // Created an array of size 256 using STL
    // It is different from traditional array because
    // It is managed by C++
    map<std::array<int, 256>, vector<string>> mp;
    for (auto str : strs)
    {
        // Those who have same frequency will be grouped
        mp[has(str)].push_back(str);
    }
    vector<vector<string>> ans;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        ans.push_back(it->second);
    }
    return ans;
}

vector<vector<string>> groupAnagrams1(vector<string> &strs)
{
    map<string, vector<string>> mp;
    for (auto str : strs)
    {
        string s = str;
        sort(s.begin(), s.end());
        // if after sorting matching key is found
        // it will not create another entry
        // It will push that string in the value
        // corresponding to that string.
        mp[s].push_back(str);
    }
    vector<vector<string>> ans;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        ans.push_back(it->second);
    }
    return ans;
}
vector<vector<string>> groupAnagrams2(vector<string> &strs)
{
    unordered_map<string, vector<string>> mp;
    for (auto it : strs)
    {
        string A = it;
        sort(A.begin(), A.end());
        if (mp.find(A) != mp.end())
        {
            mp[A].emplace_back(it);
        }
        else
        {
            mp[A] = {it};
        }
    }
    vector<vector<string>> vt;
    for (auto it : mp)
    {
        vt.emplace_back(it.second);
    }
    return vt;
}

int main() {}