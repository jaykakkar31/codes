class Solution {
public:
    void solve(int i,int j,int &count,int target,vector<int>& nums){
        if (i>j){
            return ;
        }
        if((nums[i]+nums[j])<=target){
            count+=1;
            cout<<nums[i]<<nums[j];
            solve(i+1,j,count,target,nums);solve(i,j-1,count,target,nums);
            
        }
        else{
            // j-=1;
            solve(i,j-1,count,target,nums);
        }
    }
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int left=0,right=nums.size()-1,count=0;
        int mod=1000000007;
        vector<int> exp(nums.size(),1);
        
        for(int i=1;i<nums.size();i++){
            exp[i]=2*exp[i-1]%(mod);
            
        }
        while(left<=right){
            if(nums[left]+nums[right]>target){
                right--;
            }else{
                count=(count+exp[right-left])%mod;
                left+=1;
                
            }
            
        }
        return count;
        
        
        
    }
};