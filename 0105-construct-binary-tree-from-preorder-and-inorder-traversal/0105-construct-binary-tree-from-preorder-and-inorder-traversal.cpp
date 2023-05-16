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
    TreeNode* buildTree(vector<int> &preorder,int preStart,int preEnd,vector<int> &inorder,int inStart,int inEnd,map<int,int> &mp)
    {
        if(preStart>preEnd or inStart>inEnd)return nullptr;
        TreeNode* root=new TreeNode(preorder[preStart]);
        int nodeInd=mp[preorder[preStart]];
        int nodesLeft=nodeInd-inStart;
        root->left=buildTree(preorder,preStart+1,preStart+nodesLeft,inorder,inStart,nodeInd-1,mp);
        root->right=buildTree(preorder,preStart+nodesLeft+1,preEnd,inorder,nodeInd+1,inEnd,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> mp;
        for(int i=0;i<inorder.size();i++)
            mp[inorder[i]]=i;
        TreeNode* root=buildTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
        return root;
    }
};