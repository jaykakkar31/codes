class Solution:
    def findDiagonalOrder(self, nums: List[List[int]]) -> List[int]:
        
        d=defaultdict(list)
        
        for i in range(len(nums)):
            for j in range(len(nums[i])):
                d[i+j].append(nums[i][j])
        print(d)
        
        ans=[]
        for i in d:
            ans+=reversed(d[i])
        return ans