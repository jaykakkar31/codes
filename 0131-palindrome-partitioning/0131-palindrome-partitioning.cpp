class Solution {
public:
    void solve(vector<vector<string>> &ans,vector<string> &subset,int ind,string s){
        if(s.size()==ind){
            ans.push_back(subset);
            return;
        }
        for(int i=ind;i<s.size();i++){
            if(isPalindrome(s,ind,i)){
                subset.push_back(s.substr(ind,i-ind+1));
                solve(ans,subset,i+1,s);
                subset.pop_back();
            }
            
        }
        
            
        
    }
    bool isPalindrome(string s,int start,int end){
        while(start<=end){
            if(s[start]!=s[end]){
                return false;
            }
            start+=1;
            end-=1;
            
        }
        return true;
        
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> subset;
        solve(ans,subset,0, s);
        return ans;
    }
};