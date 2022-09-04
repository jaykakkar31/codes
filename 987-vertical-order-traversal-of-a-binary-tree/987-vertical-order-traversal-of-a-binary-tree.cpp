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
    
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        vector<vector<int>> ans;
        map<int,map<int,vector<int>>> m;
        queue<pair<TreeNode*,pair<int,int>>> q;
        
        if(root==NULL){
            return ans;
        }
        q.push({root,{0,0}});
        
        while(!q.empty()){
            pair<TreeNode*,pair<int,int>> temp=q.front();
            q.pop();
            TreeNode* front=temp.first;
            int lev=temp.second.first;
            int hd=temp.second.second;
            m[hd][lev].push_back(front->val);
            
            if(front->left){
                q.push({front->left,{lev+1,hd-1}});
            }
            if(front->right){
                q.push({front->right,{lev+1,hd+1}});
            }
        }
        
        for(auto i:m){
            vector<int>v;
            for(auto j :i.second){
                sort(j.second.begin(),j.second.end());
                for (auto k:j.second){
                    v.push_back(k);
                }
                // // v.clear();
            }ans.push_back(v);
            // cout<<i.first<<" ";
        }
        return ans;
        
    }
};