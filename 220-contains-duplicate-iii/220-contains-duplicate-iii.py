class Solution:
    def containsNearbyAlmostDuplicate(self, nums: List[int], k: int, t: int) -> bool:
        n = len(nums)
        nums = [(nums[i], i) for i in range(n)]
        nums.sort()

        for i in range(n):
            n1, k1 = nums[i]
            for j in range(i+1, n):
                n2, k2 = nums[j]
                if n2-n1>t:
                    break
                if n2-n1<=t and abs(k1-k2)<=k:
                    return True
        return False
        
            
       