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
    
    void solve(TreeNode *root,unordered_map<int,vector<int>> &m,int level,int &maxi){
        if(root==NULL) return;
        
        if(root->left==NULL and root->right==NULL){
            maxi=max(level,maxi);
            m[level].push_back(root->val);
        }
        solve(root->left,m,level+1,maxi);
        solve(root->right,m,level+1,maxi);
    }
    int deepestLeavesSum(TreeNode* root) {
        unordered_map<int,vector<int>> m;
        int level=0,maxi=0;
        solve(root,m,level,maxi);
        int total=0;
        for(int i=0;i<m[maxi].size();i++){
            total+=m[maxi][i];
        }
        cout<< maxi;
        return total;
    }
};