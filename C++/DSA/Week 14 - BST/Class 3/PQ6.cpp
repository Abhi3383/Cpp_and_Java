#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *bstUsingInorder(int inorder[], int s, int e)
{
    // base case
    if (s > e)
    {
        return NULL;
    }

    int mid = (s + e) / 2;
    int element = inorder[mid];
    Node *root = new Node(element);

    root->left = bstUsingInorder(inorder, s, mid - 1);
    root->right = bstUsingInorder(inorder, mid + 1, e);

    return root;
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    // initially
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        // A
        Node *temp = q.front();
        // B
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            // C
            cout << temp->data << " ";
            // D
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int maxVal(Node *root)
{
    Node *temp = root;
    if (temp == NULL)
    {
        return -1;
    }

    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp->data;
}

Node *deleteNodeInBST(Node *root, int target)
{

    // base cae
    if (root == NULL)
    {
        return NULL;
    }
    // cout << "Request recieved for " >> root->data << " with target" << target << endl;
    if (root->data == target)
    {
        // isi ko delete krna h
        // 4 cases
        if (root->left == NULL && root->right == NULL)
        {
            // leaf node
            // delete root;
            return NULL;
        }
        else if (root->left == NULL && root->right != NULL)
        {
            Node *child = root->right;
            // delete root;
            return child;
        }
        else if (root->left != NULL && root->right == NULL)
        {
            Node *child = root->left;
            // delete root;
            return child;
        }
        else
        {
            // both child
            // find inorder predecessor inb left subtree
            int inorderPre = maxVal(root->left);
            // replace root->data value with inorder predecessor
            root->data = inorderPre;
            // delete inorder predecessor from left subtree
            root->left = deleteNodeInBST(root->left, inorderPre);
            return root;
        }
    }
    else if (target > root->data)
    {
        // right jana chahiye
        root->right = deleteNodeInBST(root->right, target);
    }
    else if (target < root->data)
    {
        // left jana chahioye
        root->left = deleteNodeInBST(root->left, target);
    }
    return root;
}

int main()
{

    int inorder[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int s = 0;
    int e = 8;

    Node *root = bstUsingInorder(inorder, s, e);
    cout << "Printing the tree" << endl;
    levelOrderTraversal(root);

    root = deleteNodeInBST(root, 100);
    levelOrderTraversal(root);

    return 0;
}