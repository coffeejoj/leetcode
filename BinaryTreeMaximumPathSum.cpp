//============================================================================
// Binary Tree Maximum Path Sum
// Given a binary tree, find the maximum path sum.
//
// The path may start and end at any node in the tree.
//
// For example:
// Given the below binary tree,
//
// " 1 "
// " / \ "
// " 2 3 "
//
// Return 6.
//
//============================================================================

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int func(TreeNode *root, int &res)
{
    if (root==NULL) return 0;
    int l=func(root->left, res);
    int r=func(root->right, res);
    if(l+r+root->val>res) res=l+r+root->val;
    if(l+root->val>res) res=l+root->val;
    if(r+root->val>res) res=r+root->val;
    if(root->val>res) res=root->val;
    int ret=root->val;
    if(root->val+r>ret) ret=root->val+r;
    if(root->val+l>ret) ret=root->val+l;
    return ret;
}

class Solution {
public:
    int maxPathSum(TreeNode *root) {
        int res=INT_MIN;
        func(root, res);
        return res;
    }
};