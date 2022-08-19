class Solution {
public:
    string findReplaceString(string s, vector<int>& indices, vector<string>& sources, vector<string>& targets) {
        string ans="";
    int j=0;
    unordered_map<int,string>m;
    unordered_map<int,string>m1;
    for(int i=0;i<indices.size();i++){
        m.insert({indices[i],sources[i]});
        m1.insert({indices[i],targets[i]});
    }
    int i=0;
    while(i<s.size()){
        if(m.find(i)==m.end() || i+m[i].size()>s.size()){
             ans+=s[i];  
             i++;
        }
        if(m.find(i)!=m.end() && i+m[i].size()<=s.size()){
            string l=s.substr(i,m[i].size());
             if(l==m[i]){
                ans+=m1[i];
                 i+=m[i].size();
             }
            else{
                 ans+=s[i];
                i++;
             }
            
        } 
        
    }
    return ans;
    }
};