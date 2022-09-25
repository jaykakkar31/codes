class Solution:
    def average(self, salary: List[int]) -> float:
        salary.sort()
        total=0
        if len(salary)==3:
            print("E")
            return salary[1]
        count=0
        for i in range(1,len(salary)-1):
            count+=1
            total+=salary[i]
        return total/count