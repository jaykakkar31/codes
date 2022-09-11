class Solution:
    def maxConsecutive(self, bottom: int, top: int, special: List[int]) -> int:
        maxi=-1
        special.sort()
        diff=special[0]-bottom
        maxi=diff
        for i in range(1,len(special)):
            diff=special[i]-special[i-1]-1
            if diff==1:
                continue
            # if diff<0:
            #     return 0
            
            maxi=max(maxi,diff)
        diff=top-special[-1]
        maxi=max(maxi,diff)
        return maxi