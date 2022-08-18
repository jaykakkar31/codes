class Solution:
    def minSetSize(self, arr: List[int]) -> int:
        c=Counter(arr)
        # s=list(set(arr))
        l=len(arr)
        d={k:v for k,v in sorted(c.items(),key=lambda x:x[1])[::-1]}
        count=0
        total=0
        for i in d:
            
            total+=d[i]
            count+=1
            if  total>=l//2:
                break
        return count
        