class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int result=0,length=0,maxi=0;
        for(auto ele:nums){
            maxi=max(maxi,ele);
        }
        
        for(int ele:nums){
            if(ele==maxi) length++;
            else length=0;
            result=max(result,length);
        }
        
        return result;
    }
};