class Solution {
public:
    bool isPrime(int n){
        if (n==1) return true;
        int flag=2;
        while(n){
            if (n==1) return true;
            if (n%2==0){
                n=n/2;
            }else if(n%3==0){
                n=n/3;
            }else if(n%5==0){
                n=n/5;
            }else{
                return false;
            }
        }
        return true;
        
    }
    bool isUgly(int n) {
        if (n==0)return false;
        return  isPrime(n);
    }
};