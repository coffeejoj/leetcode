//============================================================================
// A linked list is given such that each node contains an additional random
// pointer which could point to any node in the list or null.
//
// Return a deep copy of the list.
//
// Complexity:
// hash table with original and copy nodes pair O(n) time O(n) space
// original node -> copy node -> original node O(n) time O(1) space
//============================================================================

class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        map<RandomListNode *, RandomListNode *> my_map;
        RandomListNode *res=new RandomListNode(0);
        RandomListNode *cur=res;
        while(head) {
            if (my_map.find(head)!=my_map.end()) {
                cur->next=my_map[head];
            } else cur->next=new RandomListNode(head->label);
            if (head->random) {
                if (my_map.find(head->random)!=my_map.end()) {
                    cur->next->random=my_map[head->random];
                } else {
                    RandomListNode *new_random = new RandomListNode(head->random->label);
                    cur->next->random=new_random;
                    my_map[head->random]=new_random;
                }
            }
            head=head->next;
            cur=cur->next;
        }
        return res->next;
    }
};

class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        if(head==NULL) return NULL;
        // Note: The Solution object is instantiated only once and is reused by each test case.
        RandomListNode *cur=head;
        while(cur) {
            RandomListNode *new_node=new RandomListNode(cur->label);
            new_node->next=cur->next;
            cur->next=new_node;
            cur=new_node->next;
        }
        cur=head;
        while(cur) {
            if(cur->random) cur->next->random=cur->random->next;
            cur=cur->next->next;
        }
        cur=head;
        RandomListNode *res=cur->next;
        RandomListNode *t=res;
        while(cur) {
            cur->next=cur->next->next;
            cur=cur->next;
            if(t->next) {
                t->next=t->next->next;
                t=t->next;
            }
        }
        return res;
    }
};