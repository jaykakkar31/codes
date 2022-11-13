class Solution:
    def reverseWords(self, s: str) -> str:
        arr=[]
        temp=""
        for i in s:
            if i!=' ':
                temp+=i
            else:
                if temp!="":
                    arr.append(temp)
                temp=""
        if temp!="":
            arr.append(temp)
        print(arr)
        start=0
        end=len(arr)-1
        while start<end:
            arr[start],arr[end]=arr[end],arr[start]
            start+=1
            end-=1
        return " ".join(arr)