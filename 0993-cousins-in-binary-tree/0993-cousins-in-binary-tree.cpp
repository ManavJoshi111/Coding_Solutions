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
    int xdepth,ydepth,xparent,yparent;
    
    void check(TreeNode* root,int x,int y,int depth)
    {
        if(root==nullptr)return;
        if(root->left)
        {
            if(root->left->val==x)
                xdepth=depth,xparent=root->val;
            if(root->left->val==y)
                ydepth=depth,yparent=root->val;
        }
        if(root->right)
        {
            if(root->right->val==x)
                xdepth=depth,xparent=root->val;
            if(root->right->val==y)
                ydepth=depth,yparent=root->val;
        }
        check(root->left,x,y,1+depth);
        check(root->right,x,y,1+depth);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        if(root->val==x or root->val==y)return false;
        check(root,x,y,0);    
        return (xdepth==ydepth and xparent!=yparent);
    }
};