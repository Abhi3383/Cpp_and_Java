#include <bits/stdc++.h>
using namespace std;

class trieNode
{
public:
    char data;
    trieNode *children[26];
    bool isTerminal;
    int childCount;

    trieNode(char d)
    {
        this->data = d;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        childCount = 0;
        this->isTerminal = false;
    }
};

class Solution
{
public:
    void insertWord(trieNode *root, string word)
    {

        cout << "Inserting : " << word << endl;
        // base case
        if (word.length() == 0)
        {
            // isma root last character hai
            // ek tarah sein jha par khada hai uska parent
            root->isTerminal = true;
            return;
        }

        char ch = word[0];
        int index = ch - 'a';
        trieNode *child;

        // present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            // not present
            child = new trieNode(ch);
            root->childCount++;
            root->children[index] = child;
        }

        // recursion sambhal lega
        insertWord(child, word.substr(1));
    }
    void findLCP(string first, string &ans, trieNode *root)
    {
        if (root->isTerminal)
        {
            return;
        }
        for (int i = 0; i < first.length(); i++)
        {
            char ch = first[i];

            if (root->childCount == 1)
            {
                ans.push_back(ch);
                int index = ch - 'a';
                root = root->children[index];
            }
            else
            {
                break;
            }

            if (root->isTerminal)
            {
                break;
            }
        }
    }

    string longestCommonPrefix(vector<string> &strs)
    {
        trieNode *trie = new trieNode('-');
        // insert strings
        for (int i = 0; i < strs.size(); i++)
        {
            insertWord(trie, strs[i]);
        }

        string ans = "";
        string first = strs[0];
        findLCP(first, ans, trie);
        return ans;
    }
};

int main()
{
    Solution solution;
    vector<string> words = {"flower", "flour", "flourish"};

    string commonPrefix = solution.longestCommonPrefix(words);

    cout << "Longest Common Prefix: " << commonPrefix << endl;

    return 0;
}
