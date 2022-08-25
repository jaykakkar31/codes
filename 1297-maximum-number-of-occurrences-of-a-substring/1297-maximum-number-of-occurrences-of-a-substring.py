class Solution:
    def maxFreq(self, s: str, maxLetters: int, minSize: int, maxSize: int) -> int:
        
        count = defaultdict(int)
        for i in range(len(s)-minSize+1):
            w=s[i:i+minSize]
            if len(set(w))<=maxLetters:
                count[w] += 1
            

        maxi=0
        for i in count:
            maxi=max(count[i],maxi)
                    
        return maxi
