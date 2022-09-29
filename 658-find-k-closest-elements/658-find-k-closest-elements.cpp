class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int> ,vector<pair<int,int>>,greater<pair<int,int>>> p;
        
        for (auto i :arr){
            int diff=abs(i-x);
            p.push({diff,i});
        }
        vector<int> ans;
        while(k--){
            int ele=p.top().second;
            p.pop();
            ans.push_back(ele);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};