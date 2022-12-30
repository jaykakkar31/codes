class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> p;
        for(auto i:piles){
            p.push(i);
        }
        while(!p.empty() and k--){
            int temp=p.top();
            p.pop();
            temp-=floor(temp/2);
            p.push(temp);
            
        }
        
        int sum=0;
        while(!p.empty()){
            sum+=p.top();
            p.pop();
        }
        return sum;
    }
};