class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),[](vector<int> a,vector<int> b){
            return a[1]>b[1];
            
        });
        int count=0,sum=0,diff=0;
        for(auto i:boxTypes){
            // if(count<=truckSize ){
                if((count+i[0])>truckSize){
                    diff=truckSize-count;
                    cout<<diff<<" "<<i[0]<<endl;
                    sum+=diff*i[1];
                    count+=diff;
                    break;
                }else{
                    sum+=(i[0]*i[1]);
                    count+=i[0];
                }
            // }
        }
        return sum;
    }
};