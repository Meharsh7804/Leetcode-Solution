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
    bool ans=true;
   
    bool check(TreeNode* root,long long mini,long long maxi)
    {
        if(!root)return true;
        if(root->val>mini&&root->val<maxi)
        return check(root->left,mini,root->val) &&
        check(root->right,root->val,maxi);
        return false;
        
    }
    bool isValidBST(TreeNode* root) {
        if(root->left==NULL&&root->right==NULL)return true;
         long long mini=LONG_MIN,maxi=LONG_MAX;
        return check(root,mini,maxi);
        return ans;
    }
};