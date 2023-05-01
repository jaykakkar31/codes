class Solution:
    def average(self, salary: List[int]) -> float:
        min=1000000
        max=0
        sum=0
        for i in salary:
            if i<min:
                min=i
            if i>max:
                max=i
            sum+=i
        print(max,min)
        sum-=max
        sum-=min
        return sum/(len(salary)-2)