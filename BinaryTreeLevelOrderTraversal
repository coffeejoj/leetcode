//============================================================================
// Binary Tree Level Order Traversal
// Given a binary tree, return the level order traversal of its nodes' values.
// (ie, from left to right, level by level).
//
// For example:
// Given binary tree {3,9,20,#,#,15,7},
// 3
// / \
// 9 20
// / \
// 15 7
// return its level order traversal as:
// [
// [3],
// [9,20],
// [15,7]
// ]
//============================================================================

class Solution {
public:
    vector<vector<int> > levelOrder(TreeNode *root) {
        vector<vector<int> > res;
        if (root==NULL) return res;
        queue<TreeNode *>que;
        que.push(root);
        while(!que.empty()) {
            vector<int> tmp;
            for(int i=que.size();i>=1;i--) {
                TreeNode *cur=que.front();
                que.pop();
                tmp.push_back(cur->val);
                if(cur->left) que.push(cur->left);
                if(cur->right) que.push(cur->right);
            }
            res.push_back(tmp);
        }
        return res;
    }
};