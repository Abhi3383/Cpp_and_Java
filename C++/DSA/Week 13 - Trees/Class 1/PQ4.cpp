// Diameter of binary tree

#include <bits/stdc++.h>
using namespace std;

//   Definition for a binary tree node.
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
void func(Node *root, int &ans)
{
    if (root == NULL)
        return;
    ans = max(ans, height(root->left) + height(root->right));
    func(root->left, ans);
    func(root->right, ans);
}
int diameterOfBinaryTree(Node *root)
{
    if (root == NULL)
        return 0;
    int ans = 0;
    func(root, ans);
    return ans;
}

int main()
{
    Node *root = NULL;
    root = buildTree();
    cout << diameterOfBinaryTree(root);

    return 0;
}