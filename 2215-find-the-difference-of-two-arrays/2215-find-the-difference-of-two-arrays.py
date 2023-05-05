class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        nums1=list(set(nums1))
        nums2=list(set(nums2))
        print(nums2,nums1)
        c2=Counter(nums2)
        c1=Counter(nums1)
        arr=[]
        a1=[]
        a2=[]
        for i in nums2:
            if c1[i]>=1 :
                pass
            else:    
                a1.append(i)
        print(a1)
        for i in nums1:
            if c2[i]>=1:
                pass
            else:
                a2.append(i)
        print(a2)
        arr.append(a2)
        arr.append(a1)
        
        return arr