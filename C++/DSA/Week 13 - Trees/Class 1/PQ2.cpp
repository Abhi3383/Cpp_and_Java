// Inorder/Preorder/Postorder traversal

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
    cout << "Enter the data for the left part of :" << data << " node" << endl;
    root->left = buildTree();
    cout << "Enter the data for the right part of :" << data << " node" << endl;
    root->right = buildTree();

    return root;
}

void inOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}
void preOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void postOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = NULL;
    root = buildTree();
    cout << "InOrder :";
    inOrderTraversal(root);
    cout << endl;
    cout << "PreOrder :";
    preOrderTraversal(root);
    cout << endl;
    cout << "PostOrder :";
    postOrderTraversal(root);

    return 0;
}