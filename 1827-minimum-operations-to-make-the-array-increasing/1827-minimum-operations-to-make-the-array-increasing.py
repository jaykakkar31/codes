class Solution:
    def minOperations(self, nums: List[int]) -> int:
        # nums.sort()
        i=1
        count=0
        while i<len(nums):
            if nums[i]>nums[i-1]:
                i+=1
                continue
            elif nums[i]==nums[i-1]:
                nums[i]+=1
                print(nums[i],i)
                count+=1
            else:
                diff=nums[i-1]-nums[i]
                print(diff)
                nums[i]=nums[i]+diff+1
                count+=diff+1
            i+=1
        print(nums)
        return count