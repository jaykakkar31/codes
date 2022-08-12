class Solution:
    def checkArithmeticSubarrays(self, nums: List[int], l: List[int], r: List[int]) -> List[bool]:
        ans=[]
        for i in range(len(l)):
            # arr=[]
            arr=nums[l[i]:r[i]+1]
            arr.sort()
            flag=0
            if len(arr)>1:
                d=arr[1]-arr[0]
                for i in range(1,len(arr)):
                    val=arr[0]+d*i
                    if val!=arr[i]:
                        flag=1
                        ans.append(False)
                        break
                if flag==0:
                    ans.append(True)
            # else:
            #     ans.append()
        return ans