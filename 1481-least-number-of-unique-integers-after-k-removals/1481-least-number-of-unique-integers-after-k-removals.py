class Solution:
    def findLeastNumOfUniqueInts(self, arr: List[int], K: int) -> int:
        
        c=Counter(arr)
        d={k:v for k,v in sorted(c.items(),key=lambda x:x[1])}
        for i in d:
            if d[i]<=K:
                K-=d[i]
                d[i]=0
        count=0
        for i in d:
            if d[i]!=0:
                count+=1
        
        return count