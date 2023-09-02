class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }else{
                pos.push_back(nums[i]);
            }
        }
        int psize=pos.size(),nsize=neg.size(),i=0,j=0;
        int posi=1,ind=0;
        
        while(i<psize||j<nsize){
            if(posi==0){
                nums[ind]=neg[j];
                posi=1;
                j++;
            }else{
                posi=0;
                nums[ind]=pos[i];
                i++;
            }
            ind++;
        }
        return nums;
//         int pos=-1,neg=-1;
//         if(nums[0]<0){
//             neg=0;
//         }else{
//             pos=0;
//         }
        
//         for(int i=1;i<nums.size();i++){
//             if(nums[i]>0){
//                 pos=i;
//             }
            
//         }
    }
};