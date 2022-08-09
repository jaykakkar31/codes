class Solution:

    def __init__(self, nums: List[int]):
        self.arr = defaultdict(list)
        for k,v in enumerate(nums):
            self.arr[v].append(k)
        
    def pick(self, target: int) -> int:
        return  choice(self.arr[target])


# Your Solution object will be instantiated and called as such:
# obj = Solution(nums)
# param_1 = obj.pick(target)