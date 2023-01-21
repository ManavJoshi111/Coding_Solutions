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
    int check(TreeNode* root)
    {
        if(root==nullptr)
            return 0;
        return max(check(root->left),check(root->right))+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==nullptr)return true;
        int left=check(root->left);
        int right=check(root->right);
        if(abs(left-right)>1)
            return false;
        return isBalanced(root->left) and isBalanced(root->right);
            
    }
};