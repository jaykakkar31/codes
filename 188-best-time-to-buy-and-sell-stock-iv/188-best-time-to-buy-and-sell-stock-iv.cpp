class Solution {
public:
    int solve(int i,int buy,vector<int> &prices,int k,vector<vector<vector<int>>> &dp){
        if(i==prices.size()){
            return 0;
        }
        if(k==0) return 0;
        if(dp[i][buy][k]!=-1) return dp[i][buy][k];
        if(buy){
            return dp[i][buy][k]= max((-prices[i]+solve(i+1,0,prices,k,dp)) , solve(i+1,1,prices,k,dp));
        }else{
            return dp[i][buy][k]= max((prices[i]+solve(i+1,1,prices,k-1,dp)),solve(i+1,0,prices,k,dp));
        }
    }
    int maxProfit(int k, vector<int>& prices) {
        vector<vector<vector<int>>> dp(prices.size(),vector<vector<int>> (2,vector<int> (k+1,-1)));
        return solve(0,1,prices,k,dp);
    }
};