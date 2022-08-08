class Solution {
public:
    
    bool dfs(vector<int> adj[],vector<int> &visited,int ind,int dest){
        visited[ind]=1;
        if (ind==dest) return true;
        for(int i=0;i<adj[ind].size();i++){
            if(!visited[adj[ind][i]] && dfs(adj,visited,adj[ind][i],dest)) return true;
                
                // dfs(adj,adj[ind][i],visited);
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> adj[n];
        
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> visited(n,0);
        // v[source]=1;
        // for(int i=;i<n;i++){
        //     if(!visited[i]){
        //         dfs(adj,i,visited,source);
        //     }
        // }
        // for(auto i:visited){
        //     cout<<i<<" ";
        // }
        return dfs(adj,visited,source,destination);
        // return false;
    }
};