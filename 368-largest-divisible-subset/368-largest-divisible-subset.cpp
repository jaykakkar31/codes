class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
		sort(nums.begin(),nums.end());
        vector<int> res; 
        int n=nums.size();
        vector<int> dp(n,1);
        vector<int> track(n,-1);
        int maxInd=0;
        int maxLen=0;
        for(int end=1;end<n;end++){
            for(int start=0;start<end;start++){
                if(nums[end]%nums[start]==0 && dp[end]<1+dp[start]){
                    dp[end]=1+dp[start];
                    track[end]=start; // mapping end and start for later finding out the series
                    if(dp[end]>=maxLen){
                        maxLen=dp[end];
                        maxInd=end;
                    }
                }
            }
        }
        while(maxInd>=0){
            res.push_back(nums[maxInd]);
            maxInd=track[maxInd];
        }
        return res;
    }
//     void solve(int i,vector<int> &ans,vector<int> &nums){
        
//         if(i==nums.size()){
//             return ;
//         }
        
//         if(ans.size()==0){
//             ans.push_back(nums[i]);
//             solve(i+1,ans,nums);
//         }
//         else{
//             if (ans.back()%nums[i]==0 or nums[i]%ans.back()==0){
//                 if (find(ans.begin(),ans.end(),nums[i])==ans.end())
//                     ans.push_back(nums[i]);
//                     solve(i+1,ans,nums);
            
                
//             }else{
//                 solve(i+1,ans,nums);
//             // ans.pop_back();
//             }
            
//         }
        
//     }
//     vector<int> largestDivisibleSubset(vector<int>& nums) {
//         vector<int> ans,temp;
//         sort(nums.begin(),nums.end(),[](const int a,int b){
//             return a>=b;
//         });
//         for(int i=0;i<nums.size();i++){
//             solve(i,ans,nums);
            
//             if (ans.size()>temp.size()){
//                 temp=ans;
//             }
//             ans={};
//         }
//         return temp;
        
//     }
};