class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int maj=n%2==0?n/2:(n+1)/2;
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]){
                m[nums[i]]++;
            }else{
                m[nums[i]]=1;
            
            }
        }
        for(auto i:m){
            if(i.second>=maj){
                return i.first;
            }
        }
        return 0;
    }
};