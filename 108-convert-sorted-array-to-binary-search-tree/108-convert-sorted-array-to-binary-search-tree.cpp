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
    TreeNode* solve(vector<int>& nums,int start,int end){
        if(start>end) return NULL;
        int mid=(start+end)/2;
        TreeNode *p=new TreeNode(nums[mid]);
        p->left=solve(nums,start,mid-1);
        p->right=solve(nums,mid+1,end);
        return p;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        // TreeNode *root,temp;
        // root=temp
        return solve(nums,0,nums.size()-1);
    }
};