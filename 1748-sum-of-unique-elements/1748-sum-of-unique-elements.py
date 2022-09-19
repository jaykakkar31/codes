class Solution:
    def sumOfUnique(self, nums: List[int]) -> int:
        c=Counter(nums)
        total=0
        for i in c:
            if c[i]==1:
                total+=i
        return total
                