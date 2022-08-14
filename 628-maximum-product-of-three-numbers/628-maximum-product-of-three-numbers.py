class Solution:
    def maximumProduct(self, nums: List[int]) -> int:
        nums.sort()
        
        start=0
        end=len(nums)-1
        p1=-111111111111
        p2=-10000001111
        if len(nums)>=3:
            p1=nums[end]*nums[end-1]
            p1*=nums[end-2]
            p2=nums[start]*nums[start+1]
            p2*=nums[end]
#             while start<end:
#                 # if nums[start]*nums[start+1]<nums[end]*nums[end-1]:
                    
#                     break
#                 # if :
                    
                # break
            return max(p1,p2)
        return 0
                