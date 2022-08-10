class Solution:
    def numSmallerByFrequency(self, queries: List[str], words: List[str]) -> List[int]:
        arr=[]
        for i in queries:
            q=min(i)
            counter=0
            for j in words:
                # word=sorted(j)
                if i.count(q)<j.count(min(j)):
                    counter+=1
            arr.append(counter)
        return arr