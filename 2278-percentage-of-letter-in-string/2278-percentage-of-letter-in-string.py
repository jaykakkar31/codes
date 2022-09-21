class Solution:
    def percentageLetter(self, s: str, letter: str) -> int:
        n=len(s)
        l=s.count(letter)
        
        return (l)*100//n
            