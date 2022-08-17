class Solution:
    def countElements(self, nums: List[int]) -> int:
        nums.sort()
         
        first=nums[0]
        last=nums[-1]
        count=0
        for i in range(1,len(nums)-1):
            if nums[i]>first and nums[i]<last:
                print(nums[i])
                count+=1
        return count