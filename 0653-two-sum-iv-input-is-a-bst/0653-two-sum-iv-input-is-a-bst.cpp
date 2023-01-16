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
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> set;
        return dfs(root, set, k);
    }
    
    bool dfs(TreeNode* root, unordered_set<int>& set, int k){
        if(root == NULL)return false;
        if(set.count(k - root->val))return true;
        set.insert(root->val);
        return dfs(root->left, set, k) || dfs(root->right, set, k);
    }
//     map<int,int> mp;
//     bool findTarget(TreeNode* root, int k) {
//         if(root==nullptr)return false;
//         mp[root->val]++;
//         int find=k-root->val;
//         if(find==root->val)
//         {
//             return (findTarget(root->right,k) or findTarget(root->left,k));
//         }
//         if(mp[find]>=1)return true;
//         if(find>root->val)
//             return findTarget(root->right,k);
//         else
//             return findTarget(root->left,k);
        
//     }
};