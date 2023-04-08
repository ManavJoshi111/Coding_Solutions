/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    map<Node*,Node*> mp;
    Node* cloneGraph(Node* node,Node* root=nullptr) {
       if(node==nullptr)return nullptr;
        if(mp.find(node)==mp.end())
        {
            mp[node]=new Node(node->val,{});
            for(auto it:node->neighbors)
            {
                mp[node]->neighbors.push_back(cloneGraph(it));
            }
        }
        return mp[node];
    }
};