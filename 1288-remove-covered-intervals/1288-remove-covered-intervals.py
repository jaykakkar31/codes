class Solution:
    def removeCoveredIntervals(self, intervals: List[List[int]]) -> int:
        intervals.sort(key=lambda x:x[0])
        val=intervals[0]
        arr=[]
        arr.append(val)
        for i in range(1,len(intervals)):
            if arr[-1][0]<=intervals[i][0] and arr[-1][1]>=intervals[i][1]:
                # arr.pop()
                pass
                # print(arr,"E")
                # arr.append(intervals[i])
            elif arr[-1][0]>=intervals[i][0 ] and arr[-1][1]<=intervals[i][1]:
                arr.pop()
                arr.append(intervals[i])
            elif arr[-1][0]<=intervals[i][0]:
                arr.append(intervals[i])
                print(arr)
        return len(arr)
        # print(intervals)
        # count=len(intervals)
        # val=intervals[0]
        # arr=[]
        # for i in range(1,len(intervals)):
        #     if val[0]>=intervals[i][0] and val[1]<=intervals[i][1]:
        #         count-=1
        #         arr.append(intervals[i])
        #         val=intervals[i]
        #     elif val[0]<=intervals[i][0] and val[1]>=intervals[i][1]:
        #         count-=1
        #         arr.append(intervals[i])
        #         val=intervals[i]
        #     # if val[0]<=inter
        #     else:
        #         val=intervals[i]
        # return count