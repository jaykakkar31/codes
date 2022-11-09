class StockSpanner {
public:
    vector<int> v;
    stack<int>s;
    stack<int> prevCount;
    StockSpanner() {
    }
    
    int next(int price) {
        v.push_back(price);
        if(v.size()==1){
            s.push(price);
            prevCount.push(1);
            return 1;
        }
        int count=1;
        while(!s.empty() and price>=s.top()){
            s.pop();
            count+=prevCount.top();
           prevCount.pop();
                
        }
        prevCount.push(count);
        s.push(price);
        
        
        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */