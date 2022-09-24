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
    void solve(TreeNode*root,int target,vector<vector<int>> &ans,vector<int> v){
        if(root==NULL) return;
        v.push_back(root->val);
        if(root->left==NULL and root->right==NULL){
            int total=accumulate(v.begin(),v.end(),0);
            if (total==target){
                ans.push_back(v);
            }
            
            
        }
        
        solve(root->left,target,ans,v);
        solve(root->right,target,ans,v);
        v.pop_back();
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        solve(root,target,ans,v);
            return ans;
    }
};