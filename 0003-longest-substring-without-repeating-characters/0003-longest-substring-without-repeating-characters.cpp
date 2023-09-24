class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi=0,count=0,left=0,right=0,i=0;
        vector<int> m(256,-1);
        while(right<s.size()){
            if(m[s[right]]!=-1) left=max(m[s[right]]+1,left);
            m[s[right]]=right;
            maxi=max(right-left+1,maxi);
            right++;
            
//             if(m.find(s[i])!=m.end()){
//                 count=1;
//                 maxi=max(count,maxi);
//                 m.clear();
//                 m[s[i]]=1;
//             }else{
//                 m[s[i]]=1;
//                 count++;
                
//             }
            cout<<"---"<<left<<right<<endl;
            // maxi=max(maxi,count);
        }
        return maxi;
    }
};