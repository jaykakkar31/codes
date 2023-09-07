class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0,j=0,n=matrix.size(),m=matrix[0].size();
        
        
        while(i<n){
            if(target>matrix[i][m-1]){
                i++;
            }else{
                break;
            }
        }
        if(i==n ){
            return false;
        }
        cout<<"VALLED"<<matrix[0][0]<<i;
        for(int j=0;j<m;j++){
            if(matrix[i][j]==target){
                return true;
            }
        }
        return false;
    }
};