#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *buildTree()
{
    int data;
    cin >> data;

    if (data == -1)
        return NULL;
    Node *root = new Node(data);
    cout<<"Enter the data for the left part of :"<<data<<" node"<<endl;
    root->left = buildTree();
    cout<<"Enter the data for the right part of :"<<data<<" node"<<endl;
    root->right = buildTree();
    
    return root;
}

int main()
{
    Node *root = NULL;
    root = buildTree();

    return 0;
}