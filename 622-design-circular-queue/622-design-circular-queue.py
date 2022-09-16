class MyCircularQueue:

    def __init__(self, k: int):
        self.arr=[]
        self.n=k

    def enQueue(self, value: int) -> bool:
        if len(self.arr)<self.n:
            self.arr.append(value)
            return True
        return False
        # self.arr.push(value)        

    def deQueue(self) -> bool:
        if len(self.arr)==0:
            return False
        
        self.arr.pop(0)
        return True
    def Front(self) -> int:
        if len(self.arr)==0:
            return -1
        else:
            val=self.arr[0]
            # self.arr.remove(val)
            return val
        

    def Rear(self) -> int:
        if len(self.arr)==0:
            return -1
        else:
            return self.arr[len(self.arr)-1]

    def isEmpty(self) -> bool:
        if len(self.arr)==0:
            return True
        return False
        

    def isFull(self) -> bool:
        if len(self.arr)==self.n:
            return True
        return False


# Your MyCircularQueue object will be instantiated and called as such:
# obj = MyCircularQueue(k)
# param_1 = obj.enQueue(value)
# param_2 = obj.deQueue()
# param_3 = obj.Front()
# param_4 = obj.Rear()
# param_5 = obj.isEmpty()
# param_6 = obj.isFull()