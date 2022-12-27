class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        priority_queue<int,vector<int>,greater<int>> p;
        int diff=0;
        for(int i=0;i<rocks.size();i++){
            diff=capacity[i]-rocks[i];
            p.push(diff);
            
        }
        int count=0;
        while(!p.empty()){
            int temp=p.top();
            p.pop();
            if((additionalRocks-temp)>=0){
                count+=1;
                additionalRocks-=temp;
            }
        }
        return count;
    }
};