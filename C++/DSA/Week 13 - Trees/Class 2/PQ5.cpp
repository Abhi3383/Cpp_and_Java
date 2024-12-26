// Path sum

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

// Using backtracking
void solve1(Node *root, int targetSum, int &currSum, vector<int> &path,
           vector<vector<int>> &ans)
{

    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        path.push_back(root->data);
        currSum += root->data;
        if (currSum == targetSum)
        {
            ans.push_back(path);
        }
        path.pop_back();
        currSum -= root->data;
        return;
    }

    // include curr node
    path.push_back(root->data);
    currSum += root->data;
    solve1(root->left, targetSum, currSum, path, ans);
    solve1(root->right, targetSum, currSum, path, ans);
    path.pop_back();
    currSum -= root->data;
}

// Without backtracking
void solve2(Node *root, int targetSum, int currSum, vector<int> path,
           vector<vector<int>> &ans)
{

    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        path.push_back(root->data);
        currSum += root->data;
        if (currSum == targetSum)
        {
            ans.push_back(path);
        }
        return;
    }

    // include curr node
    path.push_back(root->data);
    currSum += root->data;
    solve2(root->left, targetSum, currSum, path, ans);
    solve2(root->right, targetSum, currSum, path, ans);
} 

vector<vector<int>> pathSum(Node *root, int targetSum)
{
    vector<vector<int>> ans;
    int sum = 0;
    vector<int> path;
    solve1(root, targetSum, sum, path, ans);
    return ans;
}

int main()
{
    Node *root = NULL;
    root = buildTree();
    cout << "Enter targetSum : ";
    int targetSum;
    cin >> targetSum;
    vector<vector<int>> ans = pathSum(root, targetSum);

    for (auto v : ans)
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}