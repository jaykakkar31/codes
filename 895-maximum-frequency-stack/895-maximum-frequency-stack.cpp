class FreqStack {
public:
    vector<int> v;
    unordered_map<int,int> m;
    
    priority_queue<pair<int,int>> pq;
    int pos = -1;
    FreqStack() {
        
    }
    
    void push(int val) {
        v.push_back(val);
        pos++;
        m[val]+=1;
        pq.push({m[val],pos});
        // maxi=max(maxi,m[val]);
    }
    
    int pop() {
        
        pair<int,int> temp=pq.top();
        pq.pop();
        m[v[temp.second]]--;
        return v[temp.second];
        
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */