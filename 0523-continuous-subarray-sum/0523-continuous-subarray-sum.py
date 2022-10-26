class Solution:
    def checkSubarraySum(self, nums: List[int], k: int) -> bool:
        d={}
        total=0
        for i in range(len(nums)):
            total+=nums[i]
            print(total)
            if total%k==0 and i>=1:
                return True
            if total%k not in d:
                d[total%k]=i
            else:
                diff=i-d[total%k]
                if diff>=2:
                    return True
        return False