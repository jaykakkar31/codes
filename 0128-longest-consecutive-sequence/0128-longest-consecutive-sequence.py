class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        nums.sort()
        if len(nums)==1:
            return 1
        maxi=0
        count=1
        for i in range(1,len(nums)):
            if nums[i]==nums[i-1]:
                continue
            if nums[i]==nums[i-1]+1:
                count+=1
            else:
                count=1
            maxi=max(count,maxi)
        if maxi==0 and len(nums)>=1:
            return 1
        return maxi