class Solution:
    def bagOfTokensScore(self, tokens: List[int], power: int) -> int:
        tokens.sort()
        start=0
        end=len(tokens)-1
        score=0
        if  len(tokens)>0 and tokens[0]>power:
            return 0
        maxi=0
        while start<=end:
            if power>=tokens[start]:
                power-=tokens[start]
                start+=1
                score+=1
                
            else:
                power+=tokens[end]
                end-=1
                score-=1
            maxi=max(maxi,score)
        return maxi
                