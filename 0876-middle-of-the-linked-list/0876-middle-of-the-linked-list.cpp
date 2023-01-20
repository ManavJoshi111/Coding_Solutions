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
    ListNode* middleNode(ListNode* head) {
        int size=0;
        ListNode* temp=head;
        while(temp!=nullptr)
        {
            temp=temp->next;
            size++;
        }
        if(size%2==0)
            size+=2;
        temp=head;
        int orgsize=size;
        while(--size>orgsize/2)
        {
            temp=temp->next;
        }
        return temp;
    }
};