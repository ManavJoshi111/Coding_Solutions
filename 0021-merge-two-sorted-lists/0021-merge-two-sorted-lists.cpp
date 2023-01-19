/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)
            return list2;
        if(list2==NULL)
            return list1;
        ListNode* temp=list1->val<list2->val?list1:list2;
        ListNode* head=temp;
        if(head==list1)
            list1=list1->next;
        if(head==list2)
            list2=list2->next;
        while(list2 && list1)
        {
            if(list1->val<=list2->val)
            {
                head->next=list1;
                list1=list1->next;
            }
            else
            {
                head->next=list2;
                list2=list2->next;
            }
            head=head->next;
        }
        if(list1)
            head->next=list1;
        else
            head->next=list2;
        return temp;
    }
};