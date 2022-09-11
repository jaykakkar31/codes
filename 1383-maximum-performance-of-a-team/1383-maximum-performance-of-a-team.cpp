class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& eff, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
          vector<pair<int, int>> v;
          for (int i = 0; i < n; i++){
            v.push_back({eff[i], speed[i]});
          }
          sort(v.rbegin(), v.rend()); 
        long totSpeed = 0, ans = 0;

        for(int i=0;i<n;i++){
            int currEff = v[i].first;
            int currSpeed = v[i].second;
            if (pq.size() == k) {
              totSpeed -= pq.top();
              pq.pop();
            }
            pq.push(currSpeed); 
            totSpeed += currSpeed; 
            ans = max(ans, totSpeed * currEff); 
            
        }
        return ans%(1000000007);
    }
};