class Solution {
public:
    long long solve(int i,vector<vector<int>>&q,vector<long long> &dp){
        if(i>=q.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        long long notpick=solve(i+1,q,dp);
        
        long long pick=q[i][0]+solve(i+q[i][1]+1,q,dp);
        return dp[i]=max(pick,notpick);
        
    }
    long long mostPoints(vector<vector<int>>& questions) {
        vector<long long> dp(questions.size(),-1);
        return solve(0,questions,dp);
    }
};