class Solution:
    def canMakeArithmeticProgression(self, arr: List[int]) -> bool:
        arr.sort()
        
        # a0=arr[0]
        if len(arr)==1:
            return True
        d=arr[1]-arr[0]
        for i in range(1,len(arr)):
            val=arr[0]+i*d
            print(val)
            if val!=arr[i]:
                return False
        return True