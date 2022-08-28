class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> h(k,0);
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=0)
                h[arr[i]%k]++;
            else{
                if((arr[i]* -1 )% k ==0)
                    h[0]++;
                else
                  h[ k - abs(arr[i]%k)]++;
            }
        }
        if(h[0]%2!=0) return false;
        
        for(int i=0;i<k/2;i++){
           if(h[i+1] != h[k-i-1])
               return false;
        }
        return true;
    }
};