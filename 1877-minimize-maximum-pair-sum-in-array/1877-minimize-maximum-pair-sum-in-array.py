class Solution:
    def minPairSum(self, nums: List[int]) -> int:
        c=Counter(nums)
        nums.sort()
        
        start=0
        end=len(nums)-1
        arr=[]
        maxi=0
        while start<end:
            maxi=max(maxi,nums[start]+nums[end])
            # arr.append(nums[start]+nums[end])
            start+=1
            end-=1
        return maxi
        # return max(arr)