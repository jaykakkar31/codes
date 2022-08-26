class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> mat;
        if(m*n!= original.size())
            return {};
        vector<int> v;
        for(int i=0;i<m*n;i+=n){
            v.insert(v.end(),original.begin()+i,original.begin()+i+n);
            mat.push_back(v);
            v.clear();
        }
        return mat;
    }
};