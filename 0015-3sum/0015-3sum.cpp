class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left,right;
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            left=i+1;
            right=nums.size()-1;
            if(i > 0 && nums[i] == nums[i - 1]){    
                continue;
            }
            while(left<right){
                int sum=nums[i]+nums[left]+nums[right];
                    
                if(sum==0){
                    ans.push_back({nums[i],nums[left],nums[right]}); 
                    int lowLastOccured=nums[left],maxLastOccured=nums[right];
                    while(left<right&&lowLastOccured==nums[left]){
                        left+=1;
                    }
                    while(left<right&&maxLastOccured==nums[right]){
                        right-=1;
                    }
                    // left+=1;
                    // right-=1;
                }else if(sum>0){
                    right-=1;
                }else{
                    left+=1;
                }
            }
        }
        return ans;
        
    }
};