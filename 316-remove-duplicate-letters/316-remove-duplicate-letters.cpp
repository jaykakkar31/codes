class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> lastInd(26,0);
        for(int i=0;i<s.size();i++){
            lastInd[s[i]-'a']=i;
        }
        vector<bool> seen(26, false); 
        stack<char> st;
        for(int i=0;i<s.size();i++){
            int ind=s[i]-'a';
            if(seen[ind]) continue;
            
            while(!st.empty() and st.top()>s[i] and i<lastInd[st.top()-'a']){
                seen[st.top() - 'a'] = false; 
                st.pop();
            }
            st.push(s[i]);
            seen[ind]=true;
        }
        
        string res = "";
        while (st.size() > 0){
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;  
    }
    
};