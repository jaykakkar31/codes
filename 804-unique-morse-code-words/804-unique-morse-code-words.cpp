class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> v{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<string,int> m;
        for(auto i:words){
            string str="";
            for (auto j :i){
                int ind=j-'a';
                str+=v[ind];
            }
            m[str]=1;
        }
        int count=0;
        for(auto i:m){
            count+=i.second;
        }
        return count;
    }
};