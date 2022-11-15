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
    void solve(vector<int> &v,TreeNode *root,int &count){
        if(root==NULL) return ;
        solve(v,root->left,count);
        count+=1;
        // v.push_back(root->val);
        solve(v,root->right,count);
    }
    int countNodes(TreeNode* root) {
        vector<int> v;
        int count=0;
        solve(v,root,count);
        return count;
    }
};