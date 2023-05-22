/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)return head;
        unordered_map<Node*,Node*> mp;   
        Node* newhead=new Node(head->val);
        Node* temp=head;
        Node* newtemp=newhead;
        mp[temp]=newtemp;
        temp=temp->next;
        while(temp)
        {
            newtemp->next=new Node(temp->val);
            newtemp=newtemp->next;
            mp[temp]=newtemp;
            temp=temp->next;
        }
        temp=head;
        while(temp)
        {
            Node* orgnode=temp;
            Node* newnode=mp[temp];
            newnode->next=mp[orgnode->next];
            newnode->random=mp[orgnode->random];
            temp=temp->next;
        }
        return newhead;
    }
};