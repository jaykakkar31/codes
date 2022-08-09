class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        c=Counter(nums)
        arr=[]
        for k,v in c.items():
            if v>1:
                arr.append(k)
        return arr