class Solution:
    def insert(self, intervals: List[List[int]], n: List[int]) -> List[List[int]]:
        intervals.append(n)
        intervals.sort()
        merged = []
        
        for interval in intervals:
            if merged and merged[-1][1] >= interval[0]:
                merged[-1][1] = max(merged[-1][1], interval[1])
            else:
                merged.append(interval)
        return merged