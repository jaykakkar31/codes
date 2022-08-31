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
    int height(TreeNode *root){
        if(root==NULL) return 0;
        int left=height(root->left);
        int right=height(root->right);
        return max(right,left)+1;
    }
    void solve(int level,int l,int r,vector<vector<string>> &ans,TreeNode* root){
        if(root==NULL) return;
        int mid=(l+r)/2;
        ans[level][mid]=to_string(root->val);
        
        solve(level+1,l,mid-1,ans,root->left);
        solve(level+1,mid+1,r,ans,root->right);
    }
    vector<vector<string>> printTree(TreeNode* root) {
        int h=height(root);
        int w=pow(2,h)-1;
        vector<vector<string>> ans(h,vector<string>(w,""));
        int level=0;
        solve(level,0,w-1,ans,root);
        return ans;
    }
};