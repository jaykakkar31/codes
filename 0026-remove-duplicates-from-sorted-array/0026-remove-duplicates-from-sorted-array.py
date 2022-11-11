class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        temp=list(Counter(nums))
        print(temp)
        
        
        j=0
        for i in range(len(nums)):
            if j<len(temp):
                nums[i]=temp[j]
                j+=1
            else:
                nums[i]=0
        
        return len(temp)