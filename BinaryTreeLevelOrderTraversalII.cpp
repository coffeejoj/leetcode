//============================================================================
// Binary Tree Level Order Traversal II
// Given a binary tree, return the bottom-up level order traversal of its
// nodes' values. (ie, from left to right, level by level from leaf to root).
//
// For example:
// Given binary tree {3,9,20,#,#,15,7},
// " 3 "
// " / \ "
// " 9 20 "
// " / \ "
// " 15 7 "
// return its bottom-up level order traversal as:
// [
// [15,7]
// [9,20],
// [3],
// ]
//============================================================================

class Solution {
public:
    vector<vector<int> > levelOrderBottom(TreeNode *root) {
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
        reverse(res.begin(), res.end());
        return res;
    }
};