class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> lastInd(26,0);
        int size=s.size();
        for(int i=0;i<size;i++){
            lastInd[s[i]-'a']=i;
        }
        vector<bool> seen(26,false);
        stack<char> st;
        for(int i=0;i<size;i++){
            if(seen[s[i]-'a']) continue;
            
            while(!st.empty() and st.top()>s[i] and i<lastInd[st.top()-'a']){
                seen[st.top()-'a']=false;
                st.pop();
            }
            st.push(s[i]);
            seen[s[i]-'a']=true;
            
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