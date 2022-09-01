class Solution:
    def sumEvenAfterQueries(self, nums: List[int], query: List[List[int]]) -> List[int]:
        
        sume=0
        for i in nums:
            if i%2==0:
                sume+=i
        ans=[]
        for i in query:
            if nums[i[1]]%2==0:
                sume-=nums[i[1]]
            nums[i[1]]=nums[i[1]]+i[0]
            if nums[i[1]]%2==0:
                
                sume+=nums[i[1]]
            ans.append(sume)
        return ans