class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int maj=nums.size()/3,n=nums.size();
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
            
        }
        for(auto i:m){
            if(i.second>maj){
                ans.push_back(i.first);
                
            }
        }
        return ans;
    }
};