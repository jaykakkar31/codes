class Solution:
    def countCharacters(self, words: List[str], chars: str) -> int:
        # c=Counter(chars)
        ans=0
        for i in (words):
            flag=0
            c=Counter(chars)
            for j in i:
                if j not in c or c[j]<=0:
                    flag=1
                    break
                else:
                    c[j]-=1
            if flag==0:
                ans+=len(i )
        return ans
            
            