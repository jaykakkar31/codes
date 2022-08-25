class Solution:
    def medianSlidingWindow(self, nums: List[int], k: int) -> List[float]:
        # for i in range()
        a=1
        print('%.2f'%a)
        
        ans=[]
        for i in range(len(nums)-k+1):
            a=nums[i:i+k]
            a.sort()
            if k%2!=0:
                
                ans.append(a[k//2])
            
            else:
                val=(a[k//2]+a[k//2-1])/2
                ans.append(val)
        return ans