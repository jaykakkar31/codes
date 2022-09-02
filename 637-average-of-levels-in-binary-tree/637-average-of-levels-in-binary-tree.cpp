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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> level;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            
            double size=q.size();
            double total=0;
            // cout<<size<<" ";
            for (int i=0;i<size;i++){
                TreeNode* temp=q.front();
                q.pop();
                total+=temp->val;
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                
            }
            cout<<total/size<<" ";
            double avg=double(total/size);
            level.push_back(avg);
        }
        return level;
    }
     
};