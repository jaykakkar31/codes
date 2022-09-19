class Solution:
    def getMaxLen(self, nums: List[int]) -> int:
        
        output = 0
        dp = [0, 0] # positive, negative
        for num in nums:
            if num>0:
                dp[0]+=1
                dp[1]+=1 if dp[1]!=0 else 0
            elif num<0:
                temp=dp[0]+1
                dp[0]=dp[1]+1 if dp[1]!=0 else 0
                dp[1]=temp
            else:
                dp=[0, 0]
                continue
            if dp[0]>output:
                output = dp[0]
        return output
        
#         count=0
#         prod=1
#         ans=0
#         bcount=0
#         bprod=1
#         bans=0
#         end=len(nums)-1
#         for i in range(len(nums)):
#             if nums[i]==0:
#                 count=0
#                 prod=1
#                 # continue
#             else:
#                 prod*=nums[i]
#                 count+=1
#                 if prod>0:
#                     ans=max(count,ans)
            
            
#             if nums[end-i]==0:
#                 bcount=0
#                 bprod=1
#                 # continue
#             else:
#                 bprod*=nums[end-i]
#                 bcount+=1
#                 if bprod>0:
#                     bans=max(bcount,bans)
        
#         # for i in range(len(nums)-1,-1,-1):
            
#         return max(ans,bans)