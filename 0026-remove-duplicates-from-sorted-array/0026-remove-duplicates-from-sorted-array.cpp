class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1,pos=1;
        bool updated=true;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                count+=1;
                
                nums[pos]=nums[i];
                pos+=1;
                updated=true;
            }else{
                if(updated){
                    // pos=1;
                    updated=false; 
                }
                
            }
        }
        return count;
    }
};