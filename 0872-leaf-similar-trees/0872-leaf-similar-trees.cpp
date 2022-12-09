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
    void solve(TreeNode *root1,vector<int> &v1){
        if(root1==NULL){
            return ;
        }
        solve(root1->left,v1);
        if(root1->left==NULL and root1->right==NULL)
            v1.push_back(root1->val);
        solve(root1->right,v1);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        vector<int> v1,v2;
        solve(root1,v1);
        solve(root2,v2);
        if(v1.size()!=v2.size()){
            return false;
        }
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i])
                return false;
        }
        return true;
    }
};