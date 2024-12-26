#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

 TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        //base case
        if(root == NULL)
            return NULL;
        //case 1
        if(p->val < root->val && q->val < root->val) {
            return lowestCommonAncestor(root->left, p, q);
        }
        //case 2
        else if(p->val > root->val && q->val > root->val) {
            return lowestCommonAncestor(root->right, p,q);
        }

        //case 3
        else if(p->val < root->val && q->val > root->val) {
            return root;
        }
        //case 4
        else if(q->val < root->val && p->val > root->val) {
            return root;
        }
        return root;
    }
    
int main()
{
    
}