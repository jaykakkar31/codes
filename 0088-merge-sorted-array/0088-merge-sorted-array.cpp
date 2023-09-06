class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        for(int i=m;i<nums1.size();i++){
            nums1[i]=nums2[j];
            j++;
        }
        sort(nums1.begin(),nums1.end());
//         int i=0,j=0,k=m;
//         while(i<n&&k<nums1.size()){
//             if(nums1[i]==0){
//                 nums1[i]=nums[j];
//             }
//             if(nums1[i]<=nums2[j]){
//                 i++;
//             }else{
//                 nums1[]=nums1[k]
//                 // swap(nums1[i],nums2[j]);
            
//             }
            
//         }
//         if(nums2.size()>0){
//         while(i<nums1.size()){
            
//             nums1[i]=nums2[j];
//             j++;
//             i++;
//         }    
//         }
        
        // for(auto i:nums2){
        //     cout<<i<<" ";
        // }
        
    }
};