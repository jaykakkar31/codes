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
    TreeNode *solve(TreeNode *root){
        
        // if(node1==NULL and node2!=NULL) swap(no)
        if(!root) return root;
        TreeNode *p=root->left;
        root->left=solve(root->right);
        root->right=solve(p);
        return root;
    }
    
    TreeNode* invertTree(TreeNode* root) {
        if (root==NULL)return NULL;
        solve(root);
        return root;
    }
};