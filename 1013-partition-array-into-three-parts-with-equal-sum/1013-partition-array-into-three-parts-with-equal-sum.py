class Solution:
    def canThreePartsEqualSum(self, arr: List[int]) -> bool:
        if sum(arr)%3!=0:
            return False
        target=sum(arr)//3
        count=0
        t=0
        for i in arr:
            t+=i
            if t==target:
                count+=1
                t=0
            if count==3:
                return True
        return False
            
        print(d)