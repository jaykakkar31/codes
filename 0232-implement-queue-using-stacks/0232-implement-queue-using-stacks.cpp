class MyQueue {
public:
    stack<int> s_in;
    stack<int> s_out;

    void push(int x) {
        s_in.push(x);
       
    }
    
    int pop() {
        peek();
        int val=s_out.top();
        s_out.pop();
        return val;
    }
    
    int peek() {
   
        if(s_out.empty())
            while(!s_in.empty()){
                s_out.push(s_in.top());
                s_in.pop();
            }
            
        
        return s_out.top();
        
        
    }
    
    bool empty() {
        return s_in.empty()&&s_out.empty();
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */