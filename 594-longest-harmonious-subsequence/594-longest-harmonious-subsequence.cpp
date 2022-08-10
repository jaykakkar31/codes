class Solution {
public:
    int findLHS(vector<int>& nums) {
        set<int> s;
        unordered_map<int,int> m;
        
        for(auto i: nums){
            m[i]+=1;
            s.insert(i);
        }
        int ans=0;
        for(auto i:s){
            if(m.find(i)!=m.end() and m.find(i+1)!=m.end()){
                ans=max(ans,m[i]+m[i+1]);
            }
        }
        return ans;
    }
};