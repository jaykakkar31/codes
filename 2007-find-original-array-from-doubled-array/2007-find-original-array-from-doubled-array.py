class Solution:
    def findOriginalArray(self, changed: List[int]) -> List[int]:
        c=Counter(changed)
        changed.sort()
        ans=[]
        for i in range(len(changed)):
            if c[changed[i]]>0:
                
                if changed[i]==0 and c[changed[i]]<2:
                    return []
                
                if changed[i]*2 not in c or c[changed[i]*2]==0:
                    return []
                
                c[changed[i]]-=1
                c[changed[i]*2]-=1
                ans.append(changed[i])
        return ans