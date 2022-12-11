#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left, *right;

    node(int v)
    {
        data = v;
        left = NULL;
        right = NULL;
    }
};

void printLevelOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    // we are storing the address of node in queue
    queue<node *> q;
    q.push(root);

    while (q.empty() == false)
    {
        // Node is like temp which pointed to front of queue
        node *Node = q.front();
        cout << Node->data << " ";
        q.pop();

        if (Node->left != NULL)
        {
            q.push(Node->left);
        }

        if (Node->right != NULL)
        {
            q.push(Node->right);
        }
    }
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->right->right = new node(5);

    cout << "Level order traversal of binary tree is \n";
    printLevelOrder(root);

    return 0;
}