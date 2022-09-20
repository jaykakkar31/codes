class Solution:
    def smallestDivisor(self, nums: List[int], k: int) -> int:
        nums.sort()
        s=1
        
        maxi=max(nums)
        e=maxi
        ans=maxi
        mid = s + (e-s)//2
        while s<=e:
            mid = s + (e-s)//2
            
            div = 0;  
            for i in nums:
                div+=math.ceil(i/mid)
            if div<=k:
                ans=mid
                e=mid-1
            else:
                s=mid+1
        return ans
#         for( auto i : nums ){
#             div_sum += ceil((double)i/mid); // find the sum of result
#         }
        
#         if( div_sum <= threshold ){  
#             ans = mid;  // update ans
#             e = mid-1;  
#         }
#         else{  //sum exceeded the threshold so increase divisor
#             s = mid+1;
#         }