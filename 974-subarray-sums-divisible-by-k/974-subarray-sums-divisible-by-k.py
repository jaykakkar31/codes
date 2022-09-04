class Solution:
    def subarraysDivByK(self, nums: List[int], k: int) -> int:
        s=0
        count=0
        d={0:1}
        # c=nums.count(0)
        # if len(nums)==1:
        #     if abs(nums[0])==k:
        #         count+=1
        for i in nums:
            # if abs(i)==k:
            #     count+=1
            s+=i
            if s%k in d:
                count+=d[s%k]
                d[s%k]+=1
                
            else:
                
                d[s%k]=1
        return count