class Solution {
public:
    bool solve(string pattern,string &res,string s,vector<int> &vis,int ind){
        if(ind==pattern.size()){
            res=s;
            return true;
        }
        if(pattern[ind]=='D'){
            int val=s.back()-'0';
            for( int i=1 ; i<val ; i++ )
                if( !vis[i] )
                {
                    vis[i] = true ;
                    if( solve(pattern,res,s+to_string(i),vis,ind+1) )
                        return true ;
                    vis[i] = false ;
                }
            return false ;
        }else{
            int val=s.back()-'0';
            for(int i=val+1;i<=9;i++){
                if( !vis[i] )
                {
                    vis[i]=true;
                    if(solve(pattern,res,s+to_string(i),vis,ind+1)){
                        return true;
                    }
                    vis[i]=false;
                }
            }
            return false;
        }
       
    }
    string smallestNumber(string pattern) {
        
        vector<int> visited(10,0);
        
        for(int i=1;i<=9;i++){
            string res="";
            visited[i]=1;
            if(solve(pattern,res,to_string(i),visited,0)){
                return res;
            }
            visited[i]=0;
        }
        
        return "";
    }
};