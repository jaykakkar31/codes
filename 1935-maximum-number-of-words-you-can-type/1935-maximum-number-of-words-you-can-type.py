class Solution:
    def canBeTypedWords(self, text: str, b: str) -> int:
        a=text.split()
        l=len(a)
        count=0
        for i in a:
            flag=0
            for j in b:
                if j  in i:
                    flag=1
            if flag==1:
                count+=1
        return l-count