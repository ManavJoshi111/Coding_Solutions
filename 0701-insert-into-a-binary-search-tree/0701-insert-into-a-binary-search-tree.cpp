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
    TreeNode* insertIntoBST(TreeNode* root, int val,TreeNode* oroot=nullptr) {
        if(root==nullptr)return new TreeNode(val);
        if(oroot==nullptr)oroot=root;
        if(root->val>val)
        {
            if(root->left)insertIntoBST(root->left,val,oroot);
            else 
            {
                root->left=new TreeNode(val);
                return oroot;
            }
        }
        else
        {
            if(root->right)insertIntoBST(root->right,val,oroot);
            else 
            {
                root->right=new TreeNode(val);
                return oroot;
            }
        }
        return oroot;
    }
};