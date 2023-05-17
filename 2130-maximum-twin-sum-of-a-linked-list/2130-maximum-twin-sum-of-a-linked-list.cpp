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
    int pairSum(ListNode* head) {
        vector<int> nodes;
        ListNode* temp=head;
        while(temp)
        {
            nodes.push_back(temp->val);
            temp=temp->next;
        }
        int max=INT_MIN;
        int n=nodes.size();
        for(int i=0;i<n/2;i++)
        {
            if(max<nodes[i]+nodes[n-i-1])
                max=nodes[i]+nodes[n-i-1];
        }
        return max;
    }
};