class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> m;
        vector<pair<string,int> >v;
        for(auto i:words){
            m[i]+=1;
        }
        for(auto i:m){
            v.push_back(i);
        }
        
        sort(v.begin(),v.end(),[](const pair<string,int> &a,const pair<string,int> &b){
            if(a.second!=b.second)
                return a.second>b.second;
            else
                return a.first<b.first;
            
        });
        int count=0;
        vector<string> ans;
        for(auto i :v){
            cout<<i.first<<" "<<i.second<<" ";
            ans.push_back(i.first);
            count+=1;
            if (count==k) break;
        }
        return ans;
    }
};