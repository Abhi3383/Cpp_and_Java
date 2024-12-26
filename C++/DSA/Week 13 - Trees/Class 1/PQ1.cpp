// Level order traversal

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

void levelOrderTraversal_1(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
}

void levelOrderTraversal_2(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
                q.push(NULL);
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
}

int main()
{
    Node *root = NULL;
    root = buildTree();
    cout << "Type 1 : " << endl;
    levelOrderTraversal_1(root);
    cout << endl
         << endl;
    cout << "Type 2 : " << endl;
    levelOrderTraversal_2(root);

    return 0;
}