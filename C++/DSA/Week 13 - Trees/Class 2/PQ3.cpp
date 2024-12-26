// Lowest common anscestor

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

Node *lowestCommonAncestor(Node *root, Node *p, Node *q)
{
    if (root == NULL)
        return NULL;
    if (root->data == p->data)
        return p;
    if (root->data == q->data)
        return q;

    Node *leftAns = lowestCommonAncestor(root->left, p, q);
    Node *rightAns = lowestCommonAncestor(root->right, p, q);

    if (leftAns == NULL && rightAns == NULL)
    {
        return NULL;
    }
    else if (leftAns == NULL && rightAns != NULL)
    {
        return rightAns;
    }
    else if (leftAns != NULL && rightAns == NULL)
    {
        return leftAns;
    }
    else
    {
        return root;
    }
}

int main()
{
    Node *root = NULL;
    root = buildTree();
    cout << "Enter p:";
    int x;
    cin >> x;
    Node *p = new Node(x);
    cout << "Enter q:";
    int y;
    cin >> y;
    Node *q = new Node(y);
    cout << lowestCommonAncestor(root, p, q);

    return 0;
}
