class Solution:
    def frequencySort(self, s: str) -> str:
        c=(Counter(s))
        a={k: v for k, v in sorted(c.items(), key=lambda item: item[1])}
        ans=""
        print(a)
        for key,value in a.items():
            ans+=(key*value)
        return ans[::-1]
                # a=sorted(c.values())[::-1]
        
        
        # return ans
        