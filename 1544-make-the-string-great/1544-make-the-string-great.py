class Solution:
    def makeGood(self, s: str) -> str:
        arr=[]
        if len(s)==0:
            return ""
        arr.append(s[0])
        for i in range(1,len(s)):
            if len(arr)==0:
                print("Enter",s[i])
                arr.append(s[i])
            else:
                if len(arr)!=0 and arr[-1].islower() and s[i].islower():

                    arr.append(s[i])
                elif  len(arr)!=0 and arr[-1].isupper() and s[i].isupper():
                    # print(arr,s[i])
                    arr.append(s[i])
                else:
                    if len(arr)!=0 and arr[-1].islower() and s[i].isupper():
                        temp=s[i].lower()
                        if temp!=arr[-1]:
                            arr.append(s[i])
                        else:
                            arr.pop()
                    elif len(arr)!=0 and arr[-1].isupper() and s[i].islower():
                        temp=arr[-1].lower()
                        if temp!=s[i]:
                            arr.append(s[i])
                        else:
                            arr.pop()

                
        return "".join(arr)
                    