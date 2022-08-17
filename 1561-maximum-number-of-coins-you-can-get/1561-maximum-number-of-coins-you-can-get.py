class Solution:
    def maxCoins(self, piles: List[int]) -> int:
        # # piles.remove(2)
        # print(piles)
        piles.sort()
        
        i=0
        you=0
        
        start=0
        end=len(piles)
        while start<end:
            end-=1
            alice=piles[end]
            end-=1
            you+=piles[end]
            print(you)
            start+=1
        return you
            
            