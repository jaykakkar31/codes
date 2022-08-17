class Solution:
    def kWeakestRows(self, mat: List[List[int]], k: int) -> List[int]:
        d={}
        for i in range(len(mat)):
            d[i]=sum(mat[i])
            
        a={k:v for k,v in sorted(d.items(),key=lambda x:x[1])}
        
        ans=[]
        for i in a:
            ans.append(i)
            if len(ans)==k:
                break
            
        return ans