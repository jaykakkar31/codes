class Solution {
public:
    void swap(int &a,int &b){
        int temp=a;
        a=b;
        b=temp;
        
            
    }
    void sortColors(vector<int>& nums) {
        
        //keep all zero at left and 2 at right
        
        int low=0,mid=0,high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid+=1;
            }else if(nums[mid]==1){
                mid+=1;
            
            }else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
                    
            }
        }
        
    }
};