class Solution:
    def partitionArray(self, nums: List[int], k: int) -> int:
        # nums.sort()
        temp=nums
        temp.sort()
        # c=Counter(nums)
        d={}
        for i in range(len(nums)):
            d[nums[i]]=i
        val=temp[0]
        count=1
        for i in range(1,len(nums)):
            ind=d[(temp[i])]
            if ind>=i:
                print(temp[i],val)
                if abs(temp[i]-val)>k:
                    val=temp[i]
                    count+=1
            
        return count
        