/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    map<int,int> mp;
    void traverse(TreeNode* root)
    {
        if(root==nullptr)
            return;
        if(root->left)
            traverse(root->left);
        mp[root->val]++;
        if(root->right)
            traverse(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        traverse(root);
        vector<int> ans;
        int max=INT_MIN;
        for(auto it:mp)
        {
            if(it.second>max)
            {
                ans={};
                max=it.second;
                ans.push_back(it.first);
            }
            else if(it.second==max)
                ans.push_back(it.first);
        }
        return ans;
    }
};