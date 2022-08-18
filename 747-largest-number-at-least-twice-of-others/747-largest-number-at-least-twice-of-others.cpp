#include<bits/stdc++.h>
class Solution {
public:
    int dominantIndex(vector<int> &nums) {
        int len=nums.size()-1;
        auto maxi=*max_element(nums.begin(),nums.end());
        int ind=find(nums.begin(),nums.end(),maxi)-nums.begin();
        sort(nums.begin(),nums.end());
        
        if (nums[len]>=(nums[len-1]*2)){
            return ind;
        }
        return -1;
    }
};