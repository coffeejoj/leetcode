//============================================================================
// Convert Sorted Array to Binary Search Tree
//
// Given an array where elements are sorted in ascending order, convert it to
// a height balanced BST.
//
//============================================================================

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *func(vector<int> &num, int l, int r)
{
    if(l>r) return NULL;
    int m=(l+r)/2;
    TreeNode *cur=new TreeNode(num[m]);
    cur->left=func(num, l, m-1);
    cur->right=func(num, m+1, r);
    return cur;
}

class Solution {
public:
    TreeNode *sortedArrayToBST(vector<int> &num) {
        return func(num, 0, num.size()-1);
    }
};