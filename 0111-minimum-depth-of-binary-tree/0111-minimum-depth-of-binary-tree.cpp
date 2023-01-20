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
    int ans=0;
    int minDepth(TreeNode* root,int a=0) {
        if(root==nullptr)
            return 0;
        int minleft=minDepth(root->left,a);
        int minright=minDepth(root->right,a);
        return 1+(min(minleft,minright)?min(minleft,minright):max(minleft,minright));
        // return min(minDepth(root->left,a),minDepth(root->right,a));
    }
};