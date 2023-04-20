#include <bits/stdc++.h>
class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n=s.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        if(n>0){
            string temp="";
            for (int i=s.size()-1;i>=0;i--){
                temp+=s[i];
            }
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    if(s[i-1]==temp[j-1]){
                        dp[i][j]=1+dp[i-1][j-1];
                    }else{
                        dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                    }
                }
            }
            return dp[n][n];
        }return 0;
        
        
    }
};