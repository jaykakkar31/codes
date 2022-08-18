class Solution:
    def maximumElementAfterDecrementingAndRearranging(self, arr: List[int]) -> int:
        
        arr.sort()
        count=0
        if arr[0]!=1:
            # print("R")
            arr[0]=1
            
        # print(arr)
        for i in range(1,len(arr)):
            if abs(arr[i]-arr[i-1])>1:
                arr[i]=arr[i-1]+1
                # count+=1
        return max(arr)