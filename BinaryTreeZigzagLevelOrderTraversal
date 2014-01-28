//============================================================================
// Binary Tree Zigzag Level Order Traversal
// Given a binary tree, return the zigzag level order traversal of its nodes'
// values. (ie, from left to right, then right to left for the next level and
// alternate between).
//
//For example:
// Given binary tree {3,9,20,#,#,15,7},
// 3
// / \
// 9 20
// / \
// 15 7
// return its zigzag level order traversal as:
// [
// [3],
// [20,9],
// [15,7]
// ]
//============================================================================

class Solution {
public:
    vector<vector<int> > zigzagLevelOrder(TreeNode *root) {
        vector<vector<int> > res;
        if(root == NULL) return res;
        queue<TreeNode *> que;
        que.push(root);
        int flag=0;
        while(!que.empty()) {
            vector<int> tmp;
            for(int i=que.size()-1;i>=0;i--) {
                TreeNode *cur=que.front();
                que.pop();
                tmp.push_back(cur->val);
                if (cur->left) que.push(cur->left);
                if (cur->right) que.push(cur->right);
            }
            if (flag%2) reverse(tmp.begin(), tmp.end());
            res.push_back(tmp);
            flag++;
        }
        return res;
    }
};