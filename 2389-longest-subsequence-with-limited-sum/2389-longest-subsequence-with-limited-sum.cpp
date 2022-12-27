class Solution {
public:
    int solve(int i,int target,vector<int>& nums){
        if(i==nums.size()){
            return 0;
        }
        if(target==0) return 0;
        // if (nums[i]>target) return 0;
        // if (dp[i][target]!=-1) return dp[i][target];
        int nottake=solve(i+1,target,nums);
        int take=0;
        if(nums[i]<=target) take=1+solve(i+1,target-nums[i],nums);
        
        return max(take ,nottake);
    }
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int> ans;
        
        for(auto j:queries){
            int total=0,count=0;
            priority_queue<int> pq;
            for(int i=0;i<nums.size();i++){
                total+=nums[i];
                pq.push(nums[i]);
                count+=1;
                if (total>j and !pq.empty()) {
                    total-=pq.top();
                    pq.pop();
                    count-=1;
                }
                
            }
        
            // // vector<vector<int>> dp(nums.size(),vector<int> (i,-1));
            // int count=solve(0,i,nums);
            ans.push_back(count);
        }
        return ans;
    }
};