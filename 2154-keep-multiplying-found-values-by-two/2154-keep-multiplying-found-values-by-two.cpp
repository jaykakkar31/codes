class Solution {
public:
    int findFinalValue(vector<int>& nums, int orig) {
        sort(nums.begin(),nums.end());
        
        
        while (true){
            if (find(nums.begin(),nums.end(),orig)!=nums.end()){
                orig*=2;
            }else{
                break;
            }
        }
        return orig;
    }
};