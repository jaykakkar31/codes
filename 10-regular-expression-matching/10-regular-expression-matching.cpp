class Solution {
public:
    
    bool solve(int i,int j,string s,string p,int n ,int m){
        if(i==n and j==m) return 1;
        if(i==n and j<m){
            while (j < m)
            {
                if (p[j] != '*')
                    return false;

                j += 2;
            }
            return true;
        }
        // if (j ==m)
        //     return i < n;
        int ans=0;
        if(s[i]==p[j]||p[i]=='.'){
            ans=solve(i+1,j+1,s,p,n,m);
        }
        
        else if(p[i]=='*'){
            // ans=tr
            ans=solve(i+1,j,s,p,n,m) or solve(i+1,j+1, s,p,n,m) ;
        }
        return ans;
        
    }
    bool isMatch(string s, string p) { 
        int sn=s.size(),pn=p.size();
        // return solve(0,0,s,p,sn,pn);   
        return regex_match(s, regex(p));
    }
};