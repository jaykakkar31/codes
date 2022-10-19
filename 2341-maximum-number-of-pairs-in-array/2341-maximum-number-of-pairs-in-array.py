class Solution:
    def numberOfPairs(self, nums: List[int]) -> List[int]:
        c=Counter(nums)
        count=0
        rem=0
        for i in c:
            if c[i]%2==0:
                count+=c[i]//2
            else:
                count+=c[i]//2
                rem+=1   
        return [count,rem]