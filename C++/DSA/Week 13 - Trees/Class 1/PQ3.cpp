// Height / maxDepth

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

int height(Node*root){
    if(root==NULL){
        return 0;
    }

    int leftHeight=1+height(root->left);
    int rightHeight=1+height(root->right);

    return max(leftHeight,rightHeight);
}


int main(){
    Node*root=NULL;
    root=buildTree();
    cout<<height(root);

    return 0;
}