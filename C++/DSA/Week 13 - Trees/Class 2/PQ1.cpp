// Balanced binary tree

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
    cout << "Enter data:";
    cin >> data;
    if (data == -1)
        return NULL;
    Node *root = new Node(data);
    cout << "Enter the data for the left part of :" << data << " node" << endl;
    root->left = buildTree();
    cout << "Enter the data for the right part of :" << data << " node" << endl;
    root->right = buildTree();

    return root;
}
int height(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(height(root->left), height(root->right));
}
bool isBalanced(Node *root)
{
    // Base case
    if (root == NULL)
        return true;
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int diff = abs(leftHeight - rightHeight);

    bool ans1 = (diff <= 1);

    bool leftans = isBalanced(root->left);
    bool rightans = isBalanced(root->right);

    if (ans1 && leftans && rightans)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Node *root = NULL;
    root = buildTree();
    cout << isBalanced(root);

    return 0;
}