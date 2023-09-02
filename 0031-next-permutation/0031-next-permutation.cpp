class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         next_permutation(nums.begin(),nums.end());
        // int check=0;
        // for (int i=nums.size()-2;i>=0;i--){
        //     if(nums[i]<nums[i+1]){
        //         check=1;
        //         int temp=nums[i];
        //         nums[i]=nums[i+1];
        //         nums[i+1]=temp;
        //         break;
        //     }
        // }
        // if(check==0){
        //     int temp=nums[nums.size()-1];
        //     nums[nums.size()-1]=nums[0];
        //     nums[0]=temp;
        // }
    }
};