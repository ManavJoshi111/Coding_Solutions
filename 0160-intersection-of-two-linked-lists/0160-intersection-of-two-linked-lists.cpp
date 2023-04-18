/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA)return nullptr;
        if(!headB)return nullptr;
        ListNode* a=headA;
        ListNode* b=headB;
        while(a != b)
        {
            a=a?a->next:headB;
            b=b?b->next:headA;
        }
        return a;
    }
};