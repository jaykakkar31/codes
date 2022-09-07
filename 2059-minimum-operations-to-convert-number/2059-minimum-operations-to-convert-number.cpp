class Solution {
public:
    int minimumOperations(vector<int>& nums, int start, int goal) {
        
        int n=nums.size();
        vector<bool> vis(1001,0);
        queue<int> q; //BFS
        q.push(start);
        int count=0;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                int x=q.front();
                q.pop();
                if (x==goal) return count;
                
                if(x<0 or x>1000 or vis[x]==1) continue;
                vis[x]=1;
                for(int j=0;j<n;j++){
                    int a=x+nums[j];
                    int b=x-nums[j];
                    int c=x^nums[j];
                    
                    
                    q.push(a);
                    q.push(b);
                    q.push(c);
                }
            }count+=1;
               
        }
        return -1;
    }
};