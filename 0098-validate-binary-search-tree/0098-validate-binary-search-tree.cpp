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
    void makeVec(vector<int> &inorder,TreeNode* root)
    {
        if(root==nullptr)return;
        makeVec(inorder,root->left);
        inorder.push_back(root->val);
        makeVec(inorder,root->right);
    }
    bool isValidBST(TreeNode* root) {
        vector<int> inorder;
        makeVec(inorder,root);
        for(int i=0;i<inorder.size()-1;i++)
        {
            if(inorder[i]>=inorder[i+1])return false;
        }
        return true;
    }
};