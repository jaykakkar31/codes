class Solution {
public:
    int hIndex(vector<int>& c) {
        sort(c.begin(), c.end());
        for (int i = c.size()-1; i >= 0; i --)
            if (c[i] < c.size()-i) return c.size()-i-1;
        return c.size();
    }
};