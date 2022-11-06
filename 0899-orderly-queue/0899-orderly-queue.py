class Solution:
    def orderlyQueue(self, s: str, k: int) -> str:
        # "".join(sorted(S)) if K > 1 else min(S[i:] + S[:i] for i in range(len(S)))
        if k>1:
            s=list(s)
            s.sort()
            print(s)
            return "".join(s)
        else:
            s=list(s)
            arr=[]
            for i in range(len(s)):
                s.append(s[i])
                arr.append("".join(s[i+1:]))
            arr.sort()
            return arr[0]
                    