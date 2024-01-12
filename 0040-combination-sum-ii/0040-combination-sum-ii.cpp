class Solution {
public:
    void solve(vector<int> candidates,int target,vector<vector<int>> &ans,vector<int> subset,int ind,int sum){
        if(target == 0){
            ans.push_back(subset);
            return;
        }
        else if(0>target){
            return;
        }
        for(int i=ind;i<candidates.size();i++){
            if(i>0&&i!=ind&&candidates[i]==candidates[i-1]){
                continue;
            }
            // sum+=candidates[i];
            subset.push_back(candidates[i]);
            solve(candidates,target-candidates[i],ans,subset,i+1,sum);
            subset.pop_back();
            // sum-=candidates[i];
        }
        
        // solve(candidates,target,ans,subset,ind+1);
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> subset;
        sort(candidates.begin(),candidates.end());
        solve(candidates,target,ans,subset,0,0);
        return ans;
    }
};