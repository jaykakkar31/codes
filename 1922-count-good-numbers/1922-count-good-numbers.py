class Solution:
    def countGoodNumbers(self, n: int) -> int:
        mod = 10**9 + 7
        #4 options for prime numbers (2,3,5,7) that go in odd places
        result = pow(4,n//2,mod)
        #5 options for even numbers that go in even places
        result *= pow(5,(n//2)+(n%2),mod)
        #return result after mod
        return result%(mod)