class Solution {
public:
    void swap (int i,int j,vector<int> &nums){
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
    }
    void moveZeroes(vector<int>& nums) {
        int end=nums.size()-1;
        int start=0;
        vector<int> temp(nums.size(),0);
        // cout<<temp.size()<<endl;
        int j=0;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]!=0){

                temp[j]=nums[i];
                j+=1;
            }
        }
        for(int i=0;i<temp.size();i++){
            cout<<temp[i]<<endl;
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=temp[i];
        }
       
        
    }
};