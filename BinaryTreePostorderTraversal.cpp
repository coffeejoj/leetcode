//============================================================================
// Binary Tree Postorder Traversal
//
// Given a binary tree, return the postorder traversal of its nodes' values.
//
// For example:
// Given binary tree {1,#,2,3},
// 1
// \
// 2
// /
// 3
// return [3,2,1].
//
// Note: Recursive solution is trivial, could you do it iteratively?
//
//============================================================================

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void func(TreeNode *cur, vector<int> &res)
{
    if(cur==NULL) return;
    func(cur->left, res);
    func(cur->right, res);
    res.push_back(cur->val);
}

class Solution {
public:
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> res;
        func(root, res);
        return res;
    }
};

class Solution {
public:
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> res;
        stack<TreeNode *> st;
        while(root || !st.empty()) {
            if (root) {
                res.push_back(root->val);
                st.push(root);
                root=root->right;
            } else {
                root=st.top();
                st.pop();
                root=root->left;
            }
        }
        if (!res.empty()) reverse(res.begin(), res.end());
        return res;
    }
};