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
    vector<int> vec;
    void makevector(TreeNode* root)
    {
        if(root==nullptr)
            return;
        makevector(root->left);
        vec.push_back(root->val);
        makevector(root->right);
    }
    bool isValidBST(TreeNode* root) {
         makevector( root);
        if(!root->left and !root->right)return true;
        int n=vec.size()-1;
        for(int i=0;i<n;i++)
        {
            cout<<"First ; "<<vec[i]<<endl;
            cout<<"SEc : "<<vec[i+1]<<endl;
            if(vec[i]>=vec[i+1])
                return false;
        }
        return true;
    }
};