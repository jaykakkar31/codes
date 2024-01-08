class Solution {
public:
    void solve(int ind,vector<vector<int>> &ans,vector<int>& candidates, int target,vector<int> subset,int sum){
        if(sum==target){
            ans.push_back(subset);
            return;
        }
        if(ind==candidates.size()){
            return;
        }
       
        if((candidates[ind]+sum)<=target){
            subset.push_back(candidates[ind]);
            solve(ind,ans,candidates,target,subset,sum+candidates[ind]);
            subset.pop_back();
        }
        
         solve(ind+1,ans,candidates,target,subset,sum);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int ind=0,sum=0;
        vector<vector<int>> ans;
        vector<int> subset;
        solve(ind,ans,candidates,target,subset,sum);
        return ans;
    }
};