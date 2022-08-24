class Solution {
public:
    
    int solve(int i,string &s, int k,int &maxi,int prev,vector<vector<int>> &dp){
        
        if(i==s.size()){            
            
            return 0;
        }
        if(dp[i][prev]!=-1) return dp[i][prev];
        int take=0;
    if(prev==0 || abs(s[i]-prev)<=k){
        take=1+solve(i+1,s,k,maxi,s[i],dp);
        }
       int nottake=solve(i+1,s,k,maxi,prev,dp);
        return dp[i][prev]=max(take,nottake);
            
    }
    int longestIdealString(string s, int k) {
        int maxi=0;
        vector<vector<int>> dp(s.size()+1,vector<int>(150,-1) );
        return solve(0,s,k,maxi,0,dp);
        // return maxi;
        
    }
};