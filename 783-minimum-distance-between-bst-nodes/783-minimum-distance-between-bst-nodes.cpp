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
    void solve(TreeNode *root,vector<int> &v){
        if(root==NULL) return ;
        
        v.push_back(root->val);
        solve(root->left,v);
        solve(root->right,v);
    }
    int minDiffInBST(TreeNode* root) {
        // priority_queue<int,vector<int> ,greater<int>> p;
        vector<int> v;
        solve(root,v);
        sort(v.begin(),v.end());
        int diff=0,mini=INT_MAX;
        for(int i=1;i<v.size();i++){
            diff=v[i]-v[i-1];
            mini=min(mini,diff);
            
        }
        // int a=p.top();
        // p.pop();
        // int b=p.top();
        return mini;
    }
};