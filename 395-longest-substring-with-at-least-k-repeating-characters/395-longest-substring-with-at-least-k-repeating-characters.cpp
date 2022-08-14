class Solution {
public:
    int longestSubstring(string s, int k) {
        int n = s.size();
        if(n==0 || n<k) return 0;
        if(k<=1) return n;
        
        unordered_map<char,int> map;
        for(char c: s) map[c]++;
        
        int index = 0;
        while(index<n && map[s[index]]>=k) index++;
        if(index>=n-1) return index;
        int left = longestSubstring(s.substr(0,index),k);
        while(index<n && map[s[index]]<k) index++;
        int right = (index<n)?longestSubstring(s.substr(index),k):0;

        return max(left,right);
    }
};