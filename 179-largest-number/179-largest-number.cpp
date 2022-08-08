class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),[](const int a,const int b){
            string s=to_string(a)+to_string(b);
            string t=to_string(b)+to_string(a);
            return s>t;
        });
        string ans="";
        long long total=accumulate(nums.begin(),nums.end(),0ll);
        if(total==0){
            return "0";
        }
        for(auto i:nums){
            ans+=to_string(i);
        }
        return ans;
    }
};