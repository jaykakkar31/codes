class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:
        
        
        if len(word1)!=len(word2):
            return False
        if sorted(word1)==sorted(word2):
            return True
        
        c=Counter(word1)
        c1=Counter(word2)
        
        val1=[v for k,v in c.items() ]
        val2=[v for k,v in c1.items()]
        
        for i in word2:
            if i not in c:
                return False
        
        
        if sorted(val1)==sorted(val2):
            return True