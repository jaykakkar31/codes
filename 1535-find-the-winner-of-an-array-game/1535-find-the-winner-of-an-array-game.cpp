class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        queue<int> q;
        if (k>=arr.size()) return *max_element(arr.begin(),arr.end());
        for(auto i :arr){
            q.push(i);
        }
        
        int count=0,maxi=q.front();
        q.pop();
        while (count!=k){
            if(maxi<q.front()){
                q.push(maxi);
                maxi=q.front();
                q.pop();
                count=1;
            }else{
                int val=q.front();
                q.pop();
                q.push(val);
                count+=1;
            }
        }
        return maxi;
    }
};