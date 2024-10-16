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
    bool rec(TreeNode* l,TreeNode* r){
        if(l==NULL || r==NULL){
            return l==r;
        }
        if(l->val!=r->val){
            return 0;
        }
        return rec(l->left,r->right) and rec(l->right,r->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        return rec(root->left,root->right);
    }
};