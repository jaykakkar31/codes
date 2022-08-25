class Solution:
    def fairCandySwap(self, alice: List[int], bob: List[int]) -> List[int]:
        c=Counter(alice)
        d=Counter(bob)
        a=sum(alice)
        b=sum(bob)
        m=(a+b)//2
        diff=m-a
        
        for i in c:
            if (i+diff) in d.keys():
                return [i,i+diff]
            