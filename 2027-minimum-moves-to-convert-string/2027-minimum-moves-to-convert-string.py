class Solution:
    def minimumMoves(self, s: str) -> int:
        s=list(s)
        count=0
        for i in range(len(s)):
            flag=0
            if s[i]=='O':
                continue
            else:
                print(i)
                for j in range(i,min(i+3,len(s))):
                    if s[j]=='X':
                        flag=1
                        s[j]='O'
                if flag==1:
                    count+=1
        return count