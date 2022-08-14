class Solution:
    def sortArrayByParityII(self, nums: List[int]) -> List[int]:
        odd =[]
        even=[]
        for i in range(len(nums)):
            if nums[i]%2!=0:
                odd.append(nums[i])
            else:
                even.append(nums[i])
                
        odd.sort()
        oi=0
        ei=0
        print(even)
        for i in range(len(nums)):
            if i%2!=0:
                print("o")
                nums[i]=odd[oi]
                oi+=1
            else:
                print("E")
                nums[i]=even[ei]
                ei+=1
        return nums