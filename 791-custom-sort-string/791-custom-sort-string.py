class Solution:
    def customSortString(self, order: str, s: str) -> str:
        c=Counter(s)
        ans=""
        for i in order:
            if i in s:
                # c[i]-=1
                ans+=(i*c[i])
                print(ans)
                c[i]=0
        for i in c:
            if c[i]!=0:
                ans+=i*c[i]
                c[i]=0
        print(c)
        return ans
        
        