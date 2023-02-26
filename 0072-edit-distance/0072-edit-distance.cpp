class Solution {
public:
    int solve(int i,int j,string &word1, string &word2,vector<vector<int>> &dp){
        if(i<0) return j+1;//insertions
        if(j<0) return i+1;
        if(dp[i][j]!=-1) return dp[i][j];
        if(word1[i]==word2[j]){
            return solve(i-1,j-1,word1,word2,dp);
        }
        int del=1+solve(i-1,j,word1,word2,dp);
        int insert=1+solve(i,j-1,word1,word2,dp);
        int replace=1+solve(i-1,j-1,word1,word2,dp);
        return dp[i][j]= min(del,min(insert,replace));
    }
    int minDistance(string word1, string word2) {
        int l1=word1.size(),l2=word2.size();
        vector<vector<int>> dp(l1,vector<int>(l2,-1));
        return solve(l1-1,l2-1,word1,word2,dp);
    }
};