class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        // vector<vector<in
        int n=edges.size();
        vector<vector<int>> adj(n+2);
        for(int i=0;i<n;i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
            
        }
        
        for(int i=0;i<=adj.size();i++){
            if(adj[i].size()==n){
                return i;
            }
        }
        // cout<<adj[1].size();
        
//         for(int i=0;i<);i++){
//             cout<<adj[i].size()<<endl;
            
//         }
        return 0;
    }
};