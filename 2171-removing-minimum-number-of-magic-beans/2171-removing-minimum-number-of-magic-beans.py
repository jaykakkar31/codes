class Solution:
    def minimumRemoval(self, beans: List[int]) -> int:
        beans.sort()
        total=sum(beans)
        s=sum(beans)
        mini=10000000000
        for i in range(len(beans)):
            
            val=(len(beans)-i)*beans[i]
            diff=total-val
            mini=min(mini,diff)
        return mini
        
        
        
        
        