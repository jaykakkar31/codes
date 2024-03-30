class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        vector<int> v;
        int n=arr1.size(),m=arr2.size();
        int i=0,j=0;
        while(i<n&&j<m){
            if(arr1[i]<arr2[j]){
                v.push_back(arr1[i]);
                i++;
            }else{
                v.push_back(arr2[j]);
                j++;
            }
        }
        while(i<n){
            v.push_back(arr1[i]);
            i++;
        }
        while(j<m){
            v.push_back(arr2[j]);
            j++;
        }
        int mid=(n+m)/2;
        if((n+m)%2==0){
            // int mid=(n+m)/2;
            return double(v[mid]+v[mid-1])/2;
        }else{
            return v[mid];
        }
    }
};