class Solution:
    def diagonalSort(self, mat: List[List[int]]) -> List[List[int]]:
        d=defaultdict(list)
        
        for i in range(len(mat)):
            for j in range(len(mat[0])):
                
                d[i-j].append(mat[i][j])
        for i in d:
            d[i].sort()
        arr=[1,2,3]
        print(d)
        for i in range(len(mat)):
            for j in range(len(mat[0])):
                mat[i][j]=d[i-j].pop(0)
        return mat