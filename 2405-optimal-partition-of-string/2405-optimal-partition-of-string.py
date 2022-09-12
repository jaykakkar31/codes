class Solution:
    def partitionString(self, s: str) -> int:
        ans=[]
        val=""
        for i in s:
            if i not in val:
                val+=i
            else:
                ans.append(val)
                val=""
                val+=i
        if len(val)>0:
            ans.append(val)
        print(ans)
        return len(ans)