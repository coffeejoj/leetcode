//============================================================================
// Binary Tree Inorder Traversal
// Given a binary tree, return the inorder traversal of its nodes' values.
//
// For example:
// Given binary tree {1,#,2,3},
// 1
// \
// 2
// /
// 3
// return [1,3,2].
//
// Note: Recursive solution is trivial, could you do it iteratively?
//
// Reference:
// http://www.leetcode.com/2010/04/binary-search-tree-in-order-traversal.html
//
//============================================================================

RECURSIVELY:
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void func(TreeNode *root, vector<int> &res)
{
    if(!root) return;
    func(root->left, res);
    res.push_back(root->val);
    func(root->right, res);
}

class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> res;
        func(root, res);
        return res;
    }
};


INTERATIVELY:
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> res;
        stack<TreeNode *> st;
        while(!st.empty() || root) {
            if(root){ 
                st.push(root);
                root=root->left;
            } else {
                root=st.top();
                st.pop();
                res.push_back(root->val);
                root=root->right;
            }
        }
        return res;
    }
};
