class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        c=nums.count(0)
        nums.sort()
        ans=0
        for i in range(len(nums)):
            if c==len(nums):
                break
            else:
                mini=min(nums[c:])
            
            for j in  range(len(nums)):
                if nums[j]==0:
                    continue
                else:
                    nums[j]=nums[j]-mini;
                    if nums[j]==0:
                        c+=1
            ans+=1
        return ans