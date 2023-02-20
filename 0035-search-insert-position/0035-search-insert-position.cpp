class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.size()==0)
            return 0;
        if (nums[0]>=target)
            return 0;
        for(int i=1;i<nums.size();i++){
            if (nums[i]==target)
                return i;
            if(nums[i-1]==target)
                return target;
            
            if(nums[i]>target && nums[i-1]<target){
                return i;
            }
        }
        return nums.size();
    }
};