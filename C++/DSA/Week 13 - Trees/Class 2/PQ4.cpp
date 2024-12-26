// Kth ancestor

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

bool kthAncestor(Node *root, Node *p, int k)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == p->data)
    {
        return true;
    }

    bool leftAns = kthAncestor(root->left, p, k);
    bool rightAns = kthAncestor(root->right, p, k);

    if (leftAns || rightAns)
    {
        k--;
    }
    if (k == 0)
    {
        cout << root->data;
        k=-1;
    }

    return leftAns || rightAns;
}

int main(){
    Node* root=NULL;
    root=buildTree();
    cout<<"Enter p:";
    int x;
    cin>>x;
    Node*p=new Node(x);
    cout<<"Enter the value of k:";
    int k;
    cin>>k;
    kthAncestor(root,p,k);

    return 0;
}