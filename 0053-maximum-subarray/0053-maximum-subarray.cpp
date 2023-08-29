class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=nums[0],s=nums[0];
        for(int i=1;i<nums.size();i++){
            if(s<0){
                s=0;
            }
            s+=nums[i];
            if(maxi<s){
                maxi=s;
            }
        }
        return maxi;
    }
};