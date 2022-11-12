class MedianFinder:

    def __init__(self):
        self.arr=[] 

    def addNum(self, num: int) -> None:
        self.arr.append(num)

    def findMedian(self) -> float:
        mid=len(self.arr)//2
        self.arr.sort()
        if len(self.arr)%2==0:
            
            return (self.arr[mid]+self.arr[mid-1])/2
        else:
            return self.arr[mid]
        
        

# Your MedianFinder object will be instantiated and called as such:
# obj = MedianFinder()
# obj.addNum(num)
# param_2 = obj.findMedian()