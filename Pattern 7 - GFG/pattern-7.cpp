//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int j=0;
        for(int i=n;i>=1;i--){
            for( j=i-1;j>=1;j--){
                cout<<' ';
            }
            for(int k=i;k<=n;k++){
                cout<<'*';
            }
            for(int l=n+1-(n-i);l<=n;l++){
                cout<<'*';
            }
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends