class Solution {
public:
    int reinitializePermutation(int n) {
        int count=1;
        int k = n/2;
        while(k!=1){
            if(k%2==0){
                k /= 2;
            }
            else{
                k = n/2 + (k-1)/2;
            }
            count++;
        }
        
        return count;
    }
};