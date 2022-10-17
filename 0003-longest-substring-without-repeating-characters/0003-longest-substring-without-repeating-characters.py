class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        st=[]
        maxi=0
        i=0
        left=0
        setS=set(s)
        while i<len(s):
            if s[i] not in st:
                st.append(s[i])
                i+=1
                maxi=max(maxi,len(st))
                if maxi==len(setS):
                    break
            else:
                while s[left]!=s[i]:
                    left+=1
                if s[i] in st:
                    st.pop(0)
                
        return maxi