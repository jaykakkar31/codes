//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int,int> m;
        int count=0,maxi=0,s=0;
        for(int i=0;i<n;i++){
            s+=A[i];
            if(s==0){
                maxi=max(maxi,i+1);
            }
            if(m.find(s)!=m.end()){
                count=i-m[s];
            }else{
                m[s]=i;
            }
            if(count>maxi){
                maxi=count;
            }
        }
        return maxi;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends