class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> v;
        int len=0;
        v.push_back(nums[0]);
        // len+=1;
        for(int i =1;i<nums.size();i++){
            
            if(v.back()<nums[i]){
                v.push_back(nums[i]);
                // len+=1;
            }else{
                int index=lower_bound(v.begin(),v.end(),nums[i])-v.begin();
                v[index]=nums[i];
            }
        }
        // for(auto i:v){
        //     cout<<i<<" ";
        // }
        return v.size();
    }
};