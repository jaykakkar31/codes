class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        a=[[0 for i in range(len(matrix))] for j in range(len(matrix[0]))]
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                a[i][j]=matrix[j][i]
            a[i].reverse()
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                matrix[i][j]=a[i][j]