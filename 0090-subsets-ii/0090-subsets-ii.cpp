class Solution {
public:
    void solve(int ind,vector<int> &nums,vector<vector<int>> &ans,vector<int> &subset,int n){
       
        ans.push_back(subset);
        for(int i=ind;i<n;i++){
            if(i>ind&&nums[i]==nums[i-1]){
                continue;
            }
            subset.push_back(nums[i]);
            solve(i+1,nums,ans,subset,n);
            subset.pop_back();
        }
        
        // solve(ind+1,nums,ans,subset.push_back(nums[ind]),n);
        // solve(ind+1,nums,ans,subset,n);
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        vector<int> subset;
        sort(nums.begin(),nums.end());
        int ind=0;
        solve(ind,nums,ans,subset,n);
        return ans;
    }
};