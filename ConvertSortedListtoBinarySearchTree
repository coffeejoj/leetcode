struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* func(ListNode *&head, int l, int r)
{
    if(l>r) return NULL;
    int m=l+(r-l)/2;
    TreeNode *left=func(head, l, m-1);
    TreeNode *cur=new TreeNode(head->val);
    head=head->next;
    cur->left=left;
    cur->right=func(head, m+1, r);
    return cur;
}

class Solution {
public:
    TreeNode *sortedListToBST(ListNode *head) {
        int len=0;
        ListNode *cur=head;
        while(cur) { len++; cur=cur->next;}
        return func(head, 0, len-1);
    }
};