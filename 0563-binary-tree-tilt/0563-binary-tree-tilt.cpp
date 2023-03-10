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
    int res=0;
    int findSum(TreeNode* root)
    {
        if(root==nullptr)return 0;
        return root->val+findSum(root->left)+findSum(root->right);
    }
    int findTilt(TreeNode* root) {
        if(root==nullptr)
            return 0;
        if(root->left)
            findTilt(root->left);
        if(root->right)
            findTilt(root->right);
        res+=abs(findSum(root->left)-findSum(root->right));
        return res;
    }
};