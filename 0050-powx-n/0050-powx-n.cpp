class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        int pos=1;
        if(n<0)
            pos=-1;
        long mn=abs(n);
        while(mn>0){
            if(mn%2==1){
                ans*=x;
                mn-=1;
            }else{
                x=x*x;
                mn/=2;
            }
        }
        cout<<ans;
        if(pos==-1){
            return 1/ans;
        }
        return ans;
        
    }
};