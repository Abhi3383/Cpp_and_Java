// If CBT is max Heap.
// Note : ONLY HALF CORRECT(WILL NOT WORK FOR MOST CASES, JUST HARD CODE AND BASIC IMPLEMENTATION)

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
};

pair<bool, int> solve(Node *root)
{
    // base case
    if (root == NULL)
    {
        pair<bool, int> p = make_pair(true, INT_MIN);
        return p;
    }

    pair<bool, int> leftAns = solve(root->left);
    pair<bool, int> rightAns = solve(root->right);

    if (leftAns.first == true && rightAns.first == true && root->data > leftAns.second && root->data > rightAns.second)
    {
        pair<bool, int> p = make_pair(true, root->data);
        return p;
    }
    else
    {
        pair<bool, int> p = make_pair(false, root->data);
        return p;
    }
}

int main()
{
    // Create a sample binary tree 1 -> o/p -> true
    // Node *root = new Node(10);
    // root->left = new Node(5);
    // root->right = new Node(6);
    // root->left->left = new Node(1);
    // root->left->right = new Node(2);
    // root->right->left = new Node(3);

    // Create a sample binary tree 2 -> o/p -> fasle
    // Node *root = new Node(100);
    // root->left = new Node(90);
    // root->right = new Node(110);
    // root->left->left = new Node(10);
    // root->left->right = new Node(20);
    // root->left->left->left = new Node(2);
    // root->left->left->right = new Node(4);
    // root->right->left = new Node(50);
    // root->right->right = new Node(60);

    // Create a sample binary tree 3 -> o/p -> false
    // Node *root = new Node(10);
    // root->left = new Node(20);
    // root->right = new Node(30);
    // root->left->left = new Node(40);
    // root->left->right = new Node(60);

    // Create a sample binary tree 4 -> o/p -> true
    Node *root = new Node(5);
    root->left = new Node(2);
    root->right = new Node(3);

    // Call the solve function and check if the tree is CBT or not
    pair<bool, int> result = solve(root);

    if (result.first)
        cout << "The tree is a Complete Binary Tree (CBT)." << endl;
    else
        cout << "The tree is not a Complete Binary Tree (CBT)." << endl;

    return 0;
}
