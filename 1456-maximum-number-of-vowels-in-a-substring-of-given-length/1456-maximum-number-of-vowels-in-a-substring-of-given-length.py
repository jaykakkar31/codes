class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        maxi=0
        count=0
        j=0
        for i in range(len(s)):
            if i>(k-1):
                if s[j]=='a'or s[j]=='e'or s[j]=='i'or s[j]=='o'or s[j]=='u':
                    count-=1
                j+=1
                
                
            if s[i]=='a'or s[i]=='e'or s[i]=='i'or s[i]=='o'or s[i]=='u':
                count+=1
            maxi=max(count,maxi)
        return maxi
                
        
                
        