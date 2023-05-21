class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // sort(nums.begin(),nums.end());
        int s=0,e=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if((nums[i]+nums[j])==target){
                    return {i,j};
                }
            }
        }
    //     while(s<=e){
    //         if((nums[s]+nums[e])<target){
    //             s+=1;
    //         }else if((nums[s]+nums[e])>target){
    //             e-=1;
    //         }
    //         else if((nums[s]+nums[e])==target){
    //             cout<<nums[s]<<s;
    //             return {s,e};
    //         }
    //     }
        return {};
    }
};