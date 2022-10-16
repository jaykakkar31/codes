class Solution {
public:
    int minDifficulty(vector<int>& arr, int days) {
     int n = arr.size();
        vector<vector<int>> curr(n + 1, vector<int> (days + 1)), prev(n + 1, vector<int> (days + 1));
        
        for(int i = n; i > 0; i--){
            for(int j = i - 1; j >= 0; j--){
                for(int k = 0; k < days + 1; k++){
                    if(i == n){
                        curr[j][k] = k == 1 ? arr[j] : INT_MAX;
                        continue;
                    }
        
                    if(k == 0){
                        curr[j][k] = INT_MAX;
                        continue;
                    }
                            
                    int currentMaximumIndex = max(arr[j], arr[i]) == arr[i] ? i : j;
                    int previousMaximumIndexValue = arr[j];

                    int firstWay = prev[currentMaximumIndex][k];
                    int secondWay = prev[i][k - 1];

                    if(secondWay != INT_MAX) secondWay += previousMaximumIndexValue;

                    curr[j][k] = min(firstWay, secondWay);
                }
            }
            prev = curr;
        }
        return prev[0][days] == INT_MAX ? -1 : prev[0][days];
    }
};