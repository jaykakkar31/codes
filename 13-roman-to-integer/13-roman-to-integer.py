class Solution:
    def romanToInt(self, s: str) -> int:
        d={"I":1,"V":5,"X":10,"L":50,"C":100,"D":500,"M":1000}
        t=0
        i=len(s)-1
        while i>=0:
            if d[s[i]]>d[s[i-1]] and i-1!=-1:
                # if i-1==0
                t+=(d[s[i]]-d[s[i-1]])
                i-=2
            else:
                print(s[i])
                t+=d[s[i]]
                i-=1
            # print(s[i])
        # if len(s)%2!=0:
        #     t+=d[s[0]]
        return t
                