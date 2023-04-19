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
    int dfs(TreeNode* root,bool left,int depth)
    {
        if(root==nullptr)return depth;
        return max(dfs(left?root->left:root->right,!left,depth+1),dfs(left?root->right:root->left,left,0));
    }
    int longestZigZag(TreeNode* root) {
        return max(dfs(root,true,-1),dfs(root,false,-1));
    }
};