class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         
        int bindex=-1;
        for (int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                bindex=i;
                
                break;
            }
        }
        if(bindex==-1){
            reverse(nums.begin(),nums.end());
            return ;
        }
        
        int highind=-1;
        for(int i=nums.size()-1;i>bindex;i--){
            if(nums[i]>nums[bindex]){
                swap(nums[i],nums[bindex]);
                
                break;
            }
            
        }
        reverse(nums.begin()+bindex+1,nums.end());
        
        // if(check==0){
        //     int temp=nums[nums.size()-1];
        //     nums[nums.size()-1]=nums[0];
        //     nums[0]=temp;
        // }
    }
};