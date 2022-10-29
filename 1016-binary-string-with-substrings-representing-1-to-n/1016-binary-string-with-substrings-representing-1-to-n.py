class Solution:
    def queryString(self, s: str, n: int) -> bool:
        d={}
        for i in range(1,n+1):
            print(bin(i)[2:])
            if str(bin(i)[2:]) not in s:
                return False
        return True
        