/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==nullptr)return nullptr;
        if(root==p or root==q)
            return root;
        TreeNode* forLeft=lowestCommonAncestor(root->left,p,q);
        TreeNode* forRight=lowestCommonAncestor(root->right,p,q);
        if(forLeft and forRight)return root;
        if(forLeft)return forLeft;
        return forRight;
    }
};