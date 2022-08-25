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
    bool solve(TreeNode* root){
        if(root==NULL) return true;
        if(root->left==NULL and root->right==NULL) return root->val;
        
        bool l=solve(root->left);
        bool r=solve(root->right);
        if(root->val==2){
            return l or r;
        }
        if(root->val==3){
            return l and r;
        }
        return true;
        
    }
    bool evaluateTree(TreeNode* root) {
        if(root->val==0||root->val==1) return root->val;
        return solve(root);
        
    }
};