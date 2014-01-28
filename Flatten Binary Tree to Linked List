//============================================================================
// Flatten Binary Tree to Linked List
// Given a binary tree, flatten it to a linked list in-place.
//
// For example,
// Given
//
// 1
// / \
// 2 5
// / \ \
// 3 4 6
// The flattened tree should look like:
// 1
// \
// 2
// \
// 3
// \
// 4
// \
// 5
// \
// 6
// Hints:
// If you notice carefully in the flattened tree, each node's right child
// points to the next node of a pre-order traversal.
//============================================================================

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *func(TreeNode *root)
{
    if(root==NULL) return NULL;
    if(root->left==NULL &&root->right==NULL) return root;
    TreeNode *left=root->left;
    TreeNode *right=root->right;
    if(left) {
        root->left=NULL;
        root->right=left;
        root=func(left);
        root->right=right;
    }
    if(right) {
        return func(right);
    } else return root;
}

class Solution {
public:
    void flatten(TreeNode *root) {
        func(root);
    }
};