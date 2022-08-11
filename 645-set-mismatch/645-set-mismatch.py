class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        arr=[]
        # for i in range(1,len(nums)):
        #     if nums[i-1]+1!=nums[i]:
        #         arr.append(nums[i-1])
        #         # arr.append(nums[i-1]+1)
        # return arr
        c=Counter(nums)
        maxi=0
        val=0
        for i in c:
            if c[i]>maxi:
                maxi=c[i]
                val=i
        arr.append(val)
        
        for i in range(1,len(nums)+1):
            # print(i)
            if i not in c:
                arr.append(i)
                
        return arr