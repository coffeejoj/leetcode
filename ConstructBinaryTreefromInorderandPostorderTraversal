//============================================================================
// Construct Binary Tree from Inorder and Postorder Traversal
// Given inorder and postorder traversal of a tree, construct the binary tree.
//
// Note:
// You may assume that duplicates do not exist in the tree.
//============================================================================

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *func(vector<int>::iterator post, vector<int>::iterator in, int size)
{
    if(size==0) return NULL;
    vector<int>::iterator it=find(in, in+size, *(post+size-1));
    int index=it-in;
    TreeNode *cur=new TreeNode(*it);
    cur->left=func(post, in, index);
    cur->right=func(post+index, in+index+1, size-index-1);
    return cur;
}

class Solution {
public:
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
        return func(postorder.begin(), inorder.begin(), inorder.size());
    }
};