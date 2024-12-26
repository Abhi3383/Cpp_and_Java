#include <bits/stdc++.h>
using namespace std;

class trieNode
{
public:
    char data;
    trieNode *children[26];
    bool isTerminal;

    trieNode(char d)
    {
        this->data = d;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }

        this->isTerminal = false;
    }
};

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
    // it is similar to temp which was in LL
    trieNode *child;

    // present
    if (root->children[index] != NULL)
    {
        // abb child root ban chuka hai
        // root kon uss found element par point krwa diya hai
        child = root->children[index];
    }
    else
    {
        // not present
        child = new trieNode(ch); // nayi node banayenge taki abb iska index
        // bhi aur uska iska khud ka array bhi hon
        root->children[index] = child; //issa link krwa denge root sein
        // by putting that node in the array pointed by root which is called children
    }

    // recursion sambhal lega
    insertWord(child, word.substr(1));
}

bool searchWord(trieNode *root, string word)
{
    // base case
    if (word.length() == 0)
    {
        return root->isTerminal;
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
        return false;
    }

    // rec call
    return searchWord(child, word.substr(1));
}

int main()
{
    trieNode *root = new trieNode('-');
    insertWord(root, "coding");
    insertWord(root, "code");
    insertWord(root, "coder");
    insertWord(root, "codehelp");
    insertWord(root, "baba");
    insertWord(root, "baby");
    insertWord(root, "babbar");
    insertWord(root, "babu");
    insertWord(root, "shona");

    if (searchWord(root, "coding"))
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Absent" << endl;
    }

    return 0;
}