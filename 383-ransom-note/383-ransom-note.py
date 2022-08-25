class Solution:
    def canConstruct(self, ransom: str, magazine: str) -> bool:
        c=Counter(ransom)
        d=Counter(magazine)
        flag=0
        for i in c:
            if c[i]<=d[i]:
                flag= 1
            else:
                return False
        if flag==1:
            return True