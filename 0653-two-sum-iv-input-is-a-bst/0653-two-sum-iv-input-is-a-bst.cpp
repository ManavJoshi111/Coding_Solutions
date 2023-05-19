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
    void findInorder(TreeNode* root,vector<int> &inorder)
    {
        if(!root)return;
        findInorder(root->left,inorder);
        inorder.push_back(root->val);
        findInorder(root->right,inorder);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> inorder;
        findInorder(root,inorder);
        int low=0,high=inorder.size()-1;
        while(low<high)
        {
            if(inorder[low]+inorder[high]==k)
                return true;
            if(inorder[low]+inorder[high]>k)
                high--;
            else
                low++;
        }
        return false;
    }
};