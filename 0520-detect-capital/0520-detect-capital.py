class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        print(word[0].isupper())
        if len(word)==1:
            return True
        le=len(word)
        u=0
        l=0
        for i in word:
            if i.isupper():
                u+=1
            if i.islower():
                l+=1
        if u==le:
            return True
        elif l==le:
            return True
        elif word[0].isupper():
            if u==1 and (le-u)==l:
                return True
        return False