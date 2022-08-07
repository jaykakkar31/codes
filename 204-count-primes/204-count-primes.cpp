class Solution {
public:
    int countPrimes(int n) {
        int ans=0;
        if(n==0||n==1||n==2) return 0;
        vector<int> dp(n+1,-1);
        for(int i=2;i<n;i++){
            if (dp[i]==-1){
                ans+=1;
                int k=2,j=i*2;
                while (j<n){
                    dp[j]=0;
                    j=i*k;
                    k+=1;
                }
            }
        }
        return ans;
        
    }
};