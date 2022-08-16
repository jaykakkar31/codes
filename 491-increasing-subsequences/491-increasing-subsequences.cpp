#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int> &nums,int ind,vector<int> &v){
        
        
        if(v.size()>1) ans.push_back(v);
        
        unordered_set<int>s;
        for(int i=ind;i<nums.size();i++){
            if(s.count(nums[i])) continue;
            
            s.insert(nums[i]);
            
            if(v.size()==0 ){
                v.push_back(nums[i]);
                solve(nums,i+1,v);
                v.pop_back();
            }
            
            else if(nums[i]>=v.back()){
                v.push_back(nums[i]);
                solve(nums,i+1,v);
                v.pop_back();
            }
            
        }

        
        
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        // vector<vector<int>> ans;
        vector<int> v;
        solve(nums,0,v);
        return ans;
    }
};