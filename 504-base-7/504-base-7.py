class Solution:
    def convertToBase7(self, num: int) -> str:
        s=""
        x=0
        p=1
        if num==0:
            return "0"
        if num<0:
            p=-1
            num*=-1
        while num>0:
            t=num//7
            s+=str(num%7)
            num//=7
        
        x=int(s[::-1])*p
        return str(x)