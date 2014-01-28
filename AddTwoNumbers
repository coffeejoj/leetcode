//============================================================================
// You are given two linked lists representing two non-negative numbers.
// The digits are stored in reverse order and each of their nodes contain a
// single digit. Add the two numbers and return it as a linked list.
//
// Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
// Output: 7 -> 0 -> 8
//
// Complexity:
// O(m+n)
//============================================================================

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *res=new ListNode(0);
        ListNode *cur=res;
        int tmp=0;
        while(l1||l2) {
            if (l1) { tmp+=l1->val;l1=l1->next;}
            if (l2) { tmp+=l2->val;l2=l2->next;}
            cur->next=new ListNode(tmp%10);
            cur=cur->next;
            tmp/=10;
        }
        while(tmp) { 
            cur->next=new ListNode(tmp%10);
            cur=cur->next;
            tmp/=10;
        }
        return res->next;
    }
};