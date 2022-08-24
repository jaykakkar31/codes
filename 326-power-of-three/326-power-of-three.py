class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        if n%3!=0 and n!=1:
            return False
        for i in range(n):
            print(3**i)
            if 3**i==n:
                return True
            if 3**i>n:
                return False