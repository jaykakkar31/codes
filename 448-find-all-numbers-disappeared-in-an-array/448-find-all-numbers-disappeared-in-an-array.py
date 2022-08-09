class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        size=len(nums)
        c=Counter(nums)
        nums.sort()
        arr=[]
        for i in range(1,size+1):
            if i not in c:
                
                arr.append(i)
        # nums.sort()
        # s=list(set(nums))
        # print(s)
        # arr=[]
        # for i in range(len(s)-1):
        #     if s[i]+1==s[i+1]:
        #         pass
        #     else:
        #         arr.append(s[i]+1)
        return(arr)