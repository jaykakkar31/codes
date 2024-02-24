class Solution {
public:
    string reverseWords(string s) {
        vector<string> str;
        
        string temp="";
        for(int i=0;i<s.size();i++){
            string sub = s.substr(i, 1);
            
            if(sub==" "){
                if(temp!=""){
                    bool res=temp!="";
                    cout<<res<<endl;
                    str.push_back(temp);
                }
                temp="";
                continue;
            }
            else{
                    temp+=sub;
            }
                
                
        }
        if(temp!="")
            str.push_back(temp);
        temp="";
        reverse(str.begin(),str.end());
        for(int i=0;i<str.size();i++){
            temp+=str[i];
            if(i<str.size()-1)
                temp+=" ";
        }
        return temp;
    }
};