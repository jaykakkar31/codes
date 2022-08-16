class Solution:
    def findLongestChain(self, pairs: List[List[int]]) -> int:
        pairs.sort(key=lambda x:x[1])
        
        count=1
        val=pairs[0][1]
        for i in range(1,len(pairs)):
            if val<pairs[i][0]:
                count+=1
                val=pairs[i][1]
        return count