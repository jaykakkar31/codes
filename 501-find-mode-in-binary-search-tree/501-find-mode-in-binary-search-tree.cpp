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
    void solve(TreeNode *root,unordered_map<int,int> &m){
        if(root==NULL) return;
        
        m[root->val]+=1;
        solve(root->left,m);
        solve(root->right,m);
    }
    vector<int> findMode(TreeNode* root) {
        // vector<int> v
        unordered_map<int,int> m;
        solve(root,m);
        vector<int> v;
        int ans,count=0;
        int maxi=INT_MIN;
        for(auto i:m){
            if(maxi<i.second){
                maxi=i.second;
            }
        }
        for(auto i:m){
            if(i.second==maxi)
                
                
                v.push_back(i.first);
            
        }
        return v;
        
    }
};