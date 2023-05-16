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
        // if root is nullptr return nullptr
        if(root==nullptr)return nullptr;
        // if the current node(root) is the node p or q, we will return its value, which means that we have got the node
        if(root==p or root==q)
            return root;
        // if the node is neither p nor q, then go to its children and try to find out the node
        TreeNode* forLeft=lowestCommonAncestor(root->left,p,q);
        TreeNode* forRight=lowestCommonAncestor(root->right,p,q);
        // we are going deep and if we find both the nodes then return the root bcz it is the LCA
        if(forLeft and forRight)return root;
        // if we have find either of them then return it, and other wise return nullptr;
        if(forLeft)return forLeft;
        return forRight;
    }
};