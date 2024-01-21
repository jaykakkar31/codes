class Solution {
public:
    bool isValid(string s) {
       stack<char> st;
        if(s.size()%2!=0) return false;
        int i=0;
        while(i<s.size()){
            if(s[i]=='{'||s[i]=='('||s[i]=='['){
                st.push(s[i]);
                
            }else{
                if(st.size()>0){
                    if( s[i]==')' && st.top()!='('){
                        return false;
                    }
                    if(s[i]==']' &&st.top()!='['){
                        return false;
                    }
                    if(s[i]=='}' &&st.top()!='{'){
                        return false;
                    }
                    st.pop();
                }
                else return false;
            }
            i+=1;
        }
        if(st.size()==0)
        return true;
        else return false;
    }
};