class Solution:
    def reverseVowels(self, s: str) -> str:
        start=0
        end=len(s)-1
        arr=['a','e','i','o','u','A','E','I','O','U']
        s=list(s)
        while start<end:
            if s[start] not in arr:
                start+=1
            if s[end] not in arr:
                end-=1
            if s[start] in arr and s[end] in arr:
                s[start],s[end]=s[end],s[start]
                start+=1
                end-=1
        return "".join(s)