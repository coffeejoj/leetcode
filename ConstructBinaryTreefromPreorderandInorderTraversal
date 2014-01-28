//============================================================================
// Construct Binary Tree from Preorder and Inorder Traversal
// Given preorder and inorder traversal of a tree, construct the binary tree.
//
// Note:
// You may assume that duplicates do not exist in the tree.
//
//============================================================================

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *func(vector<int>::iterator pre, vector<int>::iterator in, int size)
{
    if(size==0) return NULL;
    vector<int>::iterator it=find(in, in+size, *pre);
    int index=it-in;
    TreeNode *cur=new TreeNode(*it);
    cur->left=func(pre+1, in, index);
    cur->right=func(pre+index+1, in+index+1, size-index-1);
    return cur;
}

class Solution {
public:
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
        return func(preorder.begin(), inorder.begin(), inorder.size());
    }
};