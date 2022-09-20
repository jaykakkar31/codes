class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> p;
        
        for(int i=0;i<nums.size();i++){
            p.push(nums[i]);
        }
        
        while(!p.empty() and k--){
            int temp=p.top();
            p.pop();
            temp=temp+1;
            p.push(temp);
        }
        long long ans=1;
        while(!p.empty()){
            ans= ans%(1000000007)*p.top()%(1000000007);
            p.pop();
            
        }
        return ans%(1000000007);
    }
};