//============================================================================
// Binary Tree PreOrder Traversal
//
// Given a binary tree, return the preorder traversal of its nodes' values.
//
// For example,
//
// Given binary tree {1,#,2,3},
// /* 1 */
// /* \ */
// /* 2 */
// /* / */
// /* 3 */
// return [1,2,3].
//
// Note: Recursive solution is trivial, could you do it iteratively?
//
//============================================================================

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void func(TreeNode *cur, vector<int> &res)
{
    if (cur==NULL) return;
    res.push_back(cur->val);
    func(cur->left, res);
    func(cur->right, res);
}

class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int>  res;
        func(root, res);
        return res;
    }
};

class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> res;
        stack<TreeNode *> st;
        while(root || !st.empty()) {
            if (root) {
                res.push_back(root->val);
                st.push(root);
                root=root->left;
            } else {
                root=st.top();
                st.pop();
                root=root->right;
            }
        }
        return res;
    }
};