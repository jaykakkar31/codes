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
    void solve(TreeNode* root, int low, int high,int &total){
        if(root==NULL) return ;
        
        if(root->val>=low and root->val<=high) total+=root->val;
        solve(root->left,low,high,total);
        solve(root->right,low,high,total);
        
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int> v;
        int total=0;
        solve(root,low,high,total);
        // int total=accumulate(v.begin(),v.end(),0);
        return total;
    }
};