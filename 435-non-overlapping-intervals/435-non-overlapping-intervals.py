class Solution:
    def eraseOverlapIntervals(self, interval: List[List[int]]) -> int:
        interval.sort(key=lambda x:x[0])
        print(interval)
        count=0
        val=interval[0][1]
        for i in range(1,len(interval)):
            if val<=interval[i][0] :
                val=interval[i][1]
            elif val<=interval[i][1]:
                count+=1
                # val=interval[i][0]
            elif val>interval[i][1]:
                val=interval[i][1]
                count+=1
        return count